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
        LinkedList(){
            head = NULL;
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
            if(head == NULL){
                head = newNode;
                return;
            }
            newNode->next = head;
            head = newNode;
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
};

int main() {
    LinkedList l;
    l.InsertAtHead(10);
    l.InsertAtHead(20);
    l.InsertAtHead(30);
    l.InsertAtHead(40);
    l.InsertAtHead(50);

    l.Travers();

return 0;
}