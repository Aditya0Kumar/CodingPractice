#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
};

void insertatHead(Node* &head, int val) {
    Node* new_node = new Node(val);

    // Insertion at head
    new_node->next = head;
    head = new_node;
}

void insertatTail(Node* &head, int val) {
    Node* new_node = new Node(val);

    // Handle the case when the list is empty
    if (head == NULL) {
        head = new_node;
        return;
    }

    // Insertion at Tail
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

void insertatrandom(Node* &head, int pos, int val) {
    Node* new_node = new Node(val);

    if (pos == 0) {
        // Insertion at head
        new_node->next = head;
        head = new_node;
        return;
    }

    // Insertion at Random position
    Node* temp = head;
    int current_pos = 0;
    while (temp != NULL && current_pos < pos - 1) {
        temp = temp->next;
        current_pos++;
    }

    if (temp == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

void display(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = new Node(5);

    insertatHead(head, 1);
    insertatHead(head, 3);
    insertatHead(head, 6);
    insertatTail(head, 8);
    insertatTail(head, 9);
    insertatrandom(head, 3, 10);
    display(head);

    return 0;
}
