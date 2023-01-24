//selection algorithm in c++ program...

#include <iostream>
#include <vector>
using namespace std;

vector<int> Selection_Sort(vector<int>ara){
    int min_index;
    for(int i = 0; i < ara.size() - 1; i++){
        for(int j = i + 1; j < ara.size(); j++){
            min_index = i;
            if(ara[j] < ara[min_index]){
                min_index = j;
            }
            if(min_index != i){
                swap(ara[min_index], ara[i]);
            }
        }
    }
}

int main() {
    vector<int>ara = {12, 34, 13, 3, 45, 23, 12, 22, 47, 18};
    vector<int> vect =  Selection_Sort(ara);

    for(int i = 0; i < ara.size(); i++){
        cout<<ara[i] <<" ";
    }

return 0;
}