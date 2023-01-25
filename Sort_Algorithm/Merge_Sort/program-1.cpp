//merge sort implement in c++ program...

#include <iostream>
#include <vector>
using namespace std;

vector<int>Merge_Sort(vector<int>ara){
    if(ara.size() <= 1){
        return ara;
    }
    int mid = ara.size() / 2;
    vector<int>left;
    vector<int>right;

    for(int i = 0; i < mid; i++){
        left.push_back(ara[i]);
    }

    for(int i = mid; i < ara.size(); i++){
        right.push_back(ara[i]);
    }

    vector<int>left_sorted = Merge_Sort(left);
    vector<int>right_sorted = Merge_Sort(right);
    
    vector<int>sorted_array;
    int index1 = 0;
    int index2 = 0;
    
    for(int i = 0; i < ara.size(); i++){
        if(index1 == left_sorted.size()){
            sorted_array.push_back(right_sorted[index2]);
            index2++;
        }
        else if(index2 == right_sorted.size()){
            sorted_array.push_back(left_sorted[index1]);
            index1++;
        }
        else if(left_sorted[index1] < right_sorted[index2]){
            sorted_array.push_back(left_sorted[index1]);
            index1++;
        }
        else{
            sorted_array.push_back(right_sorted[index2]);
            index2++;
        }
    }
    return sorted_array;
}

int main() {
    vector<int>ara = {11, 9, 3, 15, 14, 18, 12, 22, 34, 56, 21};
    vector<int>vect = Merge_Sort(ara);

    for(int i = 0; i < vect.size(); i++){
        cout<<vect[i] <<" ";
    }
    cout<<"\n";

return 0;
}