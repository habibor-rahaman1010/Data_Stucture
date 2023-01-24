//Dynamic array implement in c++ program...

#include <iostream>
using namespace std;

class Array{
private:
    int *ara;
    int capacity;
    int size;
    void Increase_Size(){
        capacity = capacity * 2;
        int *temp = new int[capacity];

        for(int i = 0; i < size; i++){
            temp[i] = ara[i];
        }
        delete []ara;
        ara = temp;
    }

public:
    Array(){
        ara = new int[1];
        capacity = 1;
        size = 0;
    }

    void Push_Back(int item){
        if(capacity == size){
            Increase_Size();
        }
        ara[size] = item;
        size++;
    }

    void Insert_Index(int index, int item){
        if(index == capacity){
            Increase_Size();
        }

        for(int i = size - 1; i >= index; i--){
            ara[i + 1] = ara[i];
        }
        ara[index] = item;
        size++;
    }

    void Print(){
        for(int i = 0; i < size; i++){
            cout<<ara[i] <<" ";
        }
        cout<<"\n";
    }

    int getIndexElement(int index){
        if(index >= size){
            cout<<"Error index " <<index <<" is out of bound! \n";
            return -1;
        }
        return ara[index];
    }
   
    int getSize(){
         int count = 0;
        for(int i = 0; i < size; i++){
            count++;
        }
        return count;
    }

};

int main() {
    Array a;
    a.Push_Back(10);
    a.Push_Back(20);
    a.Push_Back(30);
    a.Push_Back(40);
    a.Push_Back(50);

    a.Print();

    cout<<a.getSize() <<"\n";
    cout<<a.getIndexElement(21) <<"\n";
    cout<<a.getIndexElement(2) <<"\n";

    a.Insert_Index(2, 100);
    a.Insert_Index(a.getSize(), 200);
    for(int i = 0; i < a.getSize(); i++){
        cout<<a.getIndexElement(i) <<" ";
    }
    cout<<"\n";
    cout<<a.getSize() <<"\n";

return 0;
}