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

Node* FindMid(Node* head){
        Node* slow = head;
        Node* fast = head;
        
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    Node* merge(Node* left, Node* right){
        Node* temp = new Node(-1);
        Node* mptr = temp;
        
        while (left != NULL && right != NULL) {
            if (left->data <= right->data) {
                mptr->next = left;
                left = left->next;
            } else {
                mptr->next = right;
                right = right->next;
            }
            mptr = mptr->next;
        }
        if(left!=NULL){
            mptr->next = left;
        }
        if(right!=NULL){
            mptr->next = right;
        }
        
        return temp->next;
    }
    
    Node* mergeSort(Node* head) {
        //base case
        if(head ==NULL || head->next==NULL){
            return head;
        }
        
        //break linked list into 2 parts
        Node* mid = FindMid(head);
        
        Node* left = head;
        Node* right = mid->next;
        mid->next = NULL;
        
        //recursive calls
        left = mergeSort(left);
        right =  mergeSort(right);
        
        //merge 2 linked list
        Node* ans = merge(left,right);
        
        return ans;
    }

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main() {
    Node* head = new Node(10000);
    Node* second = new Node(10);
    Node* third = new Node(3);
    Node* fourth = new Node(100);
    Node* fifth = new Node(5);
    Node* sixth = new Node(7);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    print(head);
    Node* finalans = mergeSort(head);
    print(finalans);


    return 0;
}
