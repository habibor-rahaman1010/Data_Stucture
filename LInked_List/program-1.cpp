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
            if(head == NULL){
                head = Create_Node(item);
                return;
            }
            Node *newNode = Create_Node(item);
            Node *a = head;
            newNode->next = a;
            a = newNode;
        }
};

int main() {


return 0;
}