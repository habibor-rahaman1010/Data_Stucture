//Dynamic array implement in c++ program...

#include <iostream>
using namespace std;

class Array{
private:
    int *ara;
    int capacity;
    int size;
    void Increase_Size(){
        this->capacity = this->capacity * 2;
        int *temp = new int[this->capacity];

        for(int i = 0; i < this->size; i++){
            temp[i] = this->ara[i];
        }
        delete []this->ara;
        this->ara = temp;
    }

    void Decrease_Size(){
        this->capacity = this->capacity / 2;
        int *tamp = new int[this->capacity];
        for(int i = 0; i < this->size; i++){
            tamp[i] = this->ara[i];
        }
        delete []this->ara;
        this->ara = tamp;
        
        if(this->size == this->capacity / 2){
            Decrease_Size();
        }
    }

public:
    //this is my constructor function...
    Array(){
        this->ara = new int[1];
        this->capacity = 1;
        this->size = 0;
    }

    //ekement add at back...
    void Push_Back(int item){
        if(this->capacity == this->size){
            Increase_Size();
        }
        this->ara[this->size] = item;
        this->size++;

        if(this->size == this->capacity / 2){
            Decrease_Size();
        }
    }

    //element add at index...
    void Insert_Index(int index, int item){
        if(index == this->capacity){
            Increase_Size();
        }

        for(int i = this->size - 1; i >= index; i--){
            this->ara[i + 1] = this->ara[i];
        }
        this->ara[index] = item;
        this->size++;

        if(this->size == this->capacity / 2){
            Decrease_Size();
        }
    }

    //print the array...
    void Print(){
        for(int i = 0; i < this->size; i++){
            cout<<this->ara[i] <<" ";
        }
        cout<<"\n";
    }

    //element extract by index...
    int getIndexElement(int index){
        if(index >= this->size){
            cout<<"Error index " <<index <<" is out of bound! \n";
            return -1;
        }
        return this->ara[index];
    }

    //element remove in back...
    void Pop_Back() {
        if(this->size == 0){
            cout<<"Current size is 0" <<"\n";
            return;
        }
        this->size--;

        if(this->size == this->capacity / 2){
            Decrease_Size();
        }
    }

    //element remove by index...
    void Erase_Element(int index){
        if(index >= this->size){
            cout<<"Index does not exit" <<"\n";
            return;
        }
        for(int i = index + 1; i < this->size; i++){
            this->ara[i - 1] = this->ara[i];
        }
        this->size--;

        if(this->size == this->capacity / 2){
            Decrease_Size();
        }
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