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
    //this is my constructor function...
    Array(){
        ara = new int[1];
        capacity = 1;
        size = 0;
    }

    //ekement add at back...
    void Push_Back(int item){
        if(capacity == size){
            Increase_Size();
        }
        ara[size] = item;
        size++;
    }

    //element add at index...
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

    //print the array...
    void Print(){
        for(int i = 0; i < size; i++){
            cout<<ara[i] <<" ";
        }
        cout<<"\n";
    }

    //element extract by index...
    int getIndexElement(int index){
        if(index >= size){
            cout<<"Error index " <<index <<" is out of bound! \n";
            return -1;
        }
        return ara[index];
    }

    //element remove in back...
    void Pop_Back() {
        if(size == 0){
            cout<<"Current size is 0" <<"\n";
            return;
        }
        size--;
    }

    //element remove by index...
    void Erase_Element(int index){
        if(index >= size){
            cout<<"Index does not exit" <<"\n";
            return;
        }
        for(int i = index + 1; i < size; i++){
            ara[i - 1] = ara[i];
        }
        size--;
    }
   
   //return the array size...
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
    a.Pop_Back();
    a.Erase_Element(2);

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