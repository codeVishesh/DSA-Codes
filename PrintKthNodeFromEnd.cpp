#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node* head) {
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
    return len;
}

void PrintKthNodeFromEnd(Node* head, int k) {
    int len = getLength(head);
    
    if (k > len) {
        cout << "k is larger than the length of the list." << endl;
        return;
    }

    int targetPosition = len - k;
    Node* temp = head;
    for (int i = 0; i < targetPosition; ++i) {
        temp = temp->next;
    }
    cout << "The " << k << "-th node from the end is: " << temp->data << endl;
}

int main() {
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);
    Node* sixth = new Node(6);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    int k = 6;

    PrintKthNodeFromEnd(head, k);

    return 0;
}
