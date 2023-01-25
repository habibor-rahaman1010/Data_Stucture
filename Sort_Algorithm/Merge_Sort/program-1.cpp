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
        
    }
}

int main() {
    vector<int>ara = {11, 9, 3, 15, 14, 18, 12, 22, 34, 56, 21};
    vector<int>vect = Merge_Sort(ara);

return 0;
}