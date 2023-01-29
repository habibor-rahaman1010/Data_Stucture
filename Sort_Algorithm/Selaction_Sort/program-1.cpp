//selection algorithm in c++ program...

#include <iostream>
#include <vector>
using namespace std;

vector<int> Selection_Sort(vector<int>ara){
    int min_index;
    int temp;
    for(int i = 0; i < ara.size() - 1; i++){
        for(int j = i + 1; j < ara.size(); j++){
            min_index = i;
            if(ara[j] < ara[min_index]){
                min_index = j;
            }
            if(min_index != i){
                temp = ara[min_index];
                ara[min_index] = ara[i];
                ara[i] = temp;
            }
        }
    }
    return ara;
}

int main() {
    vector<int>ara = {12, 34, 13, 3, 45, 23, 12, 22, 47, 18};
    vector<int> vect =  Selection_Sort(ara);

    for(int i = 0; i < vect.size(); i++){
        cout<<vect[i] <<" ";
    }

return 0;
}