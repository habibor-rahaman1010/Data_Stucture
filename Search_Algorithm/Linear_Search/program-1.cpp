// Implement linear search in c++ program...

#include <iostream>
#include <vector>
using namespace std;

int Linear_Search(vector<int>ara, int k) {
    for(int i = 0; i < ara.size(); i++){
        if(ara[i] == k){
            return i;
            break;
        }
    }
     return - 1;
}

int main() {
    int n, k;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of k: ";
    cin>>k;
    
    vector<int>ara(n);
    for(int i =  0; i < ara.size(); i++){
        cin>>ara[i];
    }
    int result =  Linear_Search(ara, k);

    if(result != -1){
        cout<<"Item found out at index: " <<result;
    }
    else{
       cout<<"Item not found!: " <<result; 
    }
    
    cout<<"\n";
return 0;
}