//binary search implement in c++ program...

#include <iostream>
#include <vector>
using namespace std;

int Binary_Search(vector<int>ara, int k){
    int low = 0;
    int heigh = ara.size() - 1;

    while(low <= heigh){
        int mid = (low + heigh) / 2;
        cout<<"Low: " <<low <<" Heigh: " <<heigh <<" Mid: " <<mid <<"\n"; 
        if(ara[mid] == k){
            return mid;
        }
        if(ara[mid] > k){
            heigh = mid - 1;
        }
        if(ara[mid] < k){
            low = mid + 1;
        } 
    }
    return -1;
}

int main() {
    int n, k;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of k: ";
    cin>>k;

    vector<int>ara(n);

    for(int i = 0; i < ara.size(); i++){
        cin>>ara[i];
    }

    int result = Binary_Search(ara, k);
    cout<<result <<"\n";

return 0;
}
