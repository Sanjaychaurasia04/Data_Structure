#include<iostream>
#include<vector>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data  = data;
        this->next = nullptr;
    }
};

Node* reverse(Node* head){
    Node* curr =  head;
    Node* prev = NULL;
    while(curr != NULL){
        Node* newNode  =curr->next;
        curr->next  =prev;
        prev = curr;
        curr = newNode;
    }
    return prev;

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

    Node* ans = reverse(first);
    while(ans!= NULL){
        cout<<ans->data<<" -> ";
        ans = ans->next;
    }
    cout<<"NULL";



    return 0;
}