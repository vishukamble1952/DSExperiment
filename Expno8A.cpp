#include <iostream>
using namespace std;

// Node structure for Singly Linked List
struct Node {
    int data;
    Node* next;
};

// Top pointer
Node* top = NULL;

// Push operation
void push(int value) {
    Node* newNode = new Node();

    if (newNode == NULL) {
        cout << "Stack Overflow\n";
        return;
    }

    newNode->data = value;
    newNode->next = top;
    top = newNode;

    cout << value << " pushed into stack\n";
}

// Display operation
void display() {
    if (top == NULL) {
        cout << "Stack is empty\n";
        return;
    }

    Node* temp = top;
    cout << "Stack elements are: ";

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Pop (Delete) operation
void pop() {
    if (top == NULL) {
        cout << "Stack Underflow\n";
        return;
    }

    Node* temp = top;
    cout << temp->data << " deleted from stack\n";

    top = top->next;
    delete temp;

    // Display after deletion
    display();
}

// Main function
int main() {
    int choice, value;

    do {
        cout << "\n--- Stack using Singly Linked List ---\n";
        cout << "1. Push\n";
        cout << "2. Delete (Pop)\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 4);

    return 0;
}
