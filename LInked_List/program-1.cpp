//Linked list implement in c++ program...

#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
};

class LinkedList {
    public:
        Node * head;
        int length;
        LinkedList(){
            head = NULL;
            length = 0;
        }

        Node *Create_Node(int item){
            Node *newNode = new Node;
            newNode->data = item;
            newNode->next = NULL;
            return newNode;
        }

        //Insert at head...
        void InsertAtHead(int item){
            Node *newNode = Create_Node(item);
            length++;
            if(head == NULL){
                head = newNode;
                return;
            }
            newNode->next = head;
            head = newNode;
        }

        //Insert any index item in linked list...
        void InsertItemIndex(int index, int item){
            if(index < 0 || index > length){
                return;
            }
            if(index == 0){
                InsertAtHead(item);
                return;
            }
            Node *a = head;
            int currentIndex = 0;
            while(currentIndex != index - 1){
                a = a->next;
                currentIndex++;
            }
            length++;
            Node *newNode = Create_Node(item);
            newNode->next = a->next;
            a->next = newNode;
        }

        //delete at head in linked list...
        void deleteAtHead(){
            if(head == NULL){
                return;
            }
            length--;
            Node *a = head;
            head = a->next;
            delete a;
        }

        //search elemnt in linked list...
        void Search(int item){
            Node *a = head;
            bool flag = false;
            int index = 0;
            while(a != NULL){
                if(a->data == item){
                    cout<<item <<" is find out at index " <<index <<"\n";
                    flag = true;
                    break;
                }
                index++;
                a = a->next;
            }
            if(!flag){
                cout<<item <<" is not found index is " << -1 <<"\n";
            }
        }

        //search all possible ocuurence...
        void SearchAllOcuurence(int item){
            Node *a = head;
            bool flag = false;
            int index = 0;
            while(a != NULL){
                if(a->data == item){
                    cout<<item <<" is find out at index " <<index <<"\n"; 
                    flag = true;
                }
                index++;
                a = a->next;
            }
            if(!flag){
                cout<<item <<" is not found index is " << -1 <<"\n";
            }
        }

        //Travers the linked list...
        void Travers() {
            Node *a = head;
            while(a != NULL){
                cout<<a->data <<" ";
                a = a->next;
            }
            cout<<"\n";
        }

        //get length in linked list...
        int getLength(){
            int lenght = 0;
            while(head != NULL){
                head = head->next;
                lenght++;
            }
            return lenght;
        }
};

int main() {
    LinkedList l;
    l.InsertAtHead(10);
    l.InsertAtHead(20);
    l.InsertAtHead(30);
    l.InsertAtHead(40);
    l.InsertAtHead(10);
    l.InsertAtHead(50);
    l.InsertAtHead(70);
    l.Travers();
    l.Search(10);
    l.InsertItemIndex(6, 100);
    l.Travers();
    l.SearchAllOcuurence(10);
    cout<<"length is: " <<l.getLength() <<"\n";
    l.deleteAtHead();
    l.Travers();
    cout<<"length is: " <<l.getLength() <<"\n";

return 0;
}