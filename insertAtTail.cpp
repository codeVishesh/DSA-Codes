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

void insertAtTail(Node* &tail, int data) {
    //step1: create a node
    Node* newNode = new Node(data);
    //step2: tail ka null newnode pe laga do
    tail->next = newNode;
    //step3: tail ko update kar do
    tail = newNode;

}

void Print(Node* tail) {
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* tail = NULL; 
    insertAtTail(tail, 1); 
    insertAtTail(tail, 2);
    insertAtTail(tail, 3);
    insertAtTail(tail, 4);
    insertAtTail(tail, 5);

    Print(tail); 
    return 0;
}
