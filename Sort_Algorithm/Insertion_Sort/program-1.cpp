//Insertion sort implement in c++ program...

#include <iostream>
#include <vector>
using namespace std;

vector<int> Insertion_Sort(vector<int>ara) {


}

int main() {
    vector<int>ara = {12, 23, 6, 8, 11, 29, 50, 33, 3, 1};

    vector<int>vect = Insertion_Sort(ara);
    for(int i = 0; i < vect.size(); i++){
        cout<<vect[i] <<" ";
    }

return 0;
}