#include<iostream>
using namespace std;

class Node{
    public:
        int data ;
        Node* next;

        Node(int data){
            this->data = data;
            this-> next = NULL;
        }
};

bool middle(Node* head){
    Node* fast = head;
    Node* slow  =head;
    while(fast != NULL){
        fast = fast->next;
        if(fast!= NULL){
            fast = fast ->next;
            slow  = slow->next;
            if(fast ==slow){
                return true;
            }
        }
    }
    return false;
}

int main(){
    Node* first = new Node(5);
    Node* second = new Node(4);
    Node* third = new Node(3);
    Node* fourth = new Node(2);
    Node* fifth = new Node(1);

    first ->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    bool ans = middle(first);
    cout<<ans <<endl;

    return 0;
}