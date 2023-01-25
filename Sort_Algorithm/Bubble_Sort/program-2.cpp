//bubble sort in c++ program...

#include <iostream>
#include <vector>
using namespace std;

vector<int> Bubble_Sort(vector<int>ara){
    for(int i = 0; i < ara.size(); i++){
        for(int j = 0; j < i; j++){
            if(ara[j] > ara[i]){
                int temp = ara[j];
                ara[j] = ara[i];
                ara[i] = temp;
            }
        }
    }
    return ara;
}

int main() {
    vector<int>ara = {12, 23, 6, 8, 11, 29, 50, 33, 3, 1};
    vector<int>vect = Bubble_Sort(ara);

    for(int i = 0; i < vect.size(); i++){
        cout<<vect[i] <<" ";
    }
    cout<<"\n";

return 0;
}