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
        if(ara[i] <= pivot){
            left.push_back(ara[i]);
        }
        if(ara[i] > pivot){
            right.push_back(ara[i]);
        }
    }
    vector<int>sorted_left = Quic_Sort(left);
    vector<int>sorted_right = Quic_Sort(right);

}

int main() {
    vector<int>ara = {11, 9, 3, 15, 14, 18, 12, 22, 34, 56, 21};
    vector<int>vect = Quic_Sort(ara);

return 0;
}