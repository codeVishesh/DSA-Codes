#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int data) {
    // Step 1: Create a new node
    Node* newNode = new Node(data);
    // Step 2: Point newNode's next to the current head
    newNode->next = head;
    // Step 3: Update the head to be the new node
    head = newNode;
}

void Print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL; // Initialize head to NULL
    insertAtHead(head, 1); // Correctly inserting at head
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 4);
    insertAtHead(head, 5);

    Print(head); // Print the linked list
    return 0;
}
