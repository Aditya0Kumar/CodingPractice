//Stack using Linked List
#include <iostream>
using namespace std;


// Node structure for the linked list-based stack
struct Node {
    int data;
    Node* next;
};

// Stack structure
struct Stack {
    Node* top;
};

// Initialize the stack
void initStack(Stack* stack) {
    stack->top = nullptr;
}

// Check if the stack is empty
bool isEmpty(Stack* stack) {
    return stack->top == nullptr;
}

// Push operation: Add an element to the stack
void push(Stack* stack, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = stack->top;
    stack->top = newNode;
    cout << value << " is pushed onto the stack" << endl;
}

// Pop operation: Remove an element from the stack
void pop(Stack* stack) {
    if (isEmpty(stack)) {
        cout << "Stack Underflow" << endl;
    }
    
    else {
        Node* temp = stack->top;
        int value = temp->data;
        stack->top = stack->top->next;
        delete temp;
        cout << value << " is popped from the stack" << endl;
    }
}

// Display the elements of the stack
void display(Stack* stack) {
    if (isEmpty(stack)) {
        cout << "Stack is empty" << endl;
    }
    else {
        Node* current = stack->top;
        cout << "Elements in the stack: ";
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
}

int main() {
    Stack stack;
    initStack(&stack);
    
    int choice, value;
    
    while (true) {
        cin >> choice;
        
        switch (choice) {
            case 1:
                cin >> value;
                push(&stack, value);
                break;
            case 2:
                pop(&stack);
                break;
            case 3:
                display(&stack);
                break;
            case 4:
                cout << "Exiting the program" << endl;
                return 0;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }
    
    return 0;
}
