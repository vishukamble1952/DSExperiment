#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Insert at beginning
void insertBegin(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Insert at end
void insertEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Delete a node
void deleteNode(int value) {
    Node* temp = head;
    Node* prev = NULL;

    while (temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    delete temp;
}

// Display list
void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    insertBegin(10);
    insertBegin(5);
    insertEnd(20);
    insertEnd(30);

    cout << "Linked List: ";
    display();

    deleteNode(20);
    cout << "After Deletion: ";
    display();

    return 0;
}
