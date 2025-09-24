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

Node* mergeTwoLists(Node* list1, Node* list2) {
        Node* ans = new Node(-1);
        Node* mptr = ans;

        while(list1 !=NULL && list2 !=NULL){
            if(list1->data <= list2->data){
                mptr ->next = list1;
                list1 = list1->next;  
            }
            else{
                mptr->next = list2;
                list2 = list2->next;
            }
            mptr = mptr ->next;
        }
        
        if(list1!=NULL){
            mptr->next = list1;
        }
        if(list2!=NULL){
            mptr->next = list2;
        }
        return ans->next;
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
    Node* list1 = new Node(1);
    Node* second = new Node(3);
    Node* third = new Node(5);
    Node* fourth = new Node(7);
    Node* fifth = new Node(9);
    Node* sixth = new Node(11);
    list1->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    Node* list2 = new Node(2);
    Node* sec = new Node(4);
    Node* thi = new Node(6);
    Node* four = new Node(8);
    Node* fif = new Node(10);
    Node* six = new Node(12);
    list2->next = sec;
    sec->next = thi;
    thi->next = four;
    four->next = fif;
    fif->next = six;

    print(list1);
    print(list2);

    Node* ans = mergeTwoLists(list1,list2);

    print(ans);


    return 0;
}
