#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    
    Node(int data){
        val = data;
        next = NULL;
    }
};

void insertatHead(Node* &head, int val){
    Node* new_node = new Node(val);// This add new node.

    //Insertion at head
    new_node->next = head; //This makes head as next of my new node.
    head = new_node;//This maked new node head.
    
}

void insertatTail(Node* &head, int val){
    Node* new_node = new Node(val);

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
}

void insertatrandom(Node* head, int pos, int val){
    Node* new_node = new Node(val);//This will make new node

    if (pos == 0){
        //Insertion at head
        new_node->next = head; //This makes head as next of my new node.
        head = new_node;//This maked new node head.
    }


    //Insertion at Random position
    Node* temp = head;
    int current_pos = 0;
    while(current_pos != (pos-1)){
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
} 

void display(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
} 

int main() {
    Node* head = new Node(5);
    //cout<<n->val;

    insertatHead(head, 1);
    insertatHead(head, 3);
    insertatHead(head, 6);
    insertatTail(head, 8);
    insertatTail(head, 9);
    insertatrandom(head, 3,10);
    display(head);
    return 0;
}