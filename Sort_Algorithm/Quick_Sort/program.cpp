//quick sort implement in c++ program

#include <iostream>
#include <vector>
using namespace std;

vector<int> Quic_Sort(vector<int>ara) {
    if(ara.size() <= 1){
        return ara;
    }
    int pivot = ara.size() / 2;

    vector<int>left, right;
    for(int i = 0; i < ara.size(); i++){
        if(i == pivot){
            continue;
        }
        if(ara[i] <= ara[pivot]){
            left.push_back(ara[i]);
        }
        if(ara[i] > ara[pivot]){
            right.push_back(ara[i]);
        }
    }
    vector<int>sorted_left = Quic_Sort(left);
    vector<int>sorted_right = Quic_Sort(right);
    vector<int>sorted_array;

    for(int i = 0; i < sorted_left.size(); i++){
        sorted_array.push_back(sorted_left[i]);
    }

    sorted_array.push_back(ara[pivot]);

    for(int i = 0; i < sorted_right.size(); i++){
        sorted_array.push_back(sorted_right[i]);
    }

    return sorted_array;
}

int main() {
    vector<int>ara = {11, 9, 3, 15, 14, 18, 12, 22, 34, 56, 21};
    vector<int>vect = Quic_Sort(ara);
    
    for(int i = 0; i < vect.size(); i++){
        cout<<vect[i] <<" ";
    }
    cout<<"\n";

return 0;
}