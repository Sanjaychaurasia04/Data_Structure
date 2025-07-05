#include<iostream>
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

// Function to merge two sorted linked lists
Node* merge(Node* list1 , Node* list2) {
    Node* first = list1;
    Node* second = list2;

    Node* temp = new Node(-1);  // Dummy node
    Node* temp2  = temp;

    while(first != NULL && second != NULL) {
        if(first->data <= second->data) {
            temp2->next = first;
            first = first->next;
        } else {
            temp2->next = second;
            second = second->next;
        }
        temp2 = temp2->next;
    }

    if(first != NULL) {
        temp2->next = first;
    } else {
        temp2->next = second;
    }

    return temp->next;  // Return the merged list 
}

//function to create linked list from array
Node* createList(int arr[], int size) {
    if (size == 0) return NULL;
    Node* head = new Node(arr[0]);
    Node* current = head;
    for (int i = 1; i < size; i++) {
        current->next = new Node(arr[i]);
        current = current->next;
    }
    return head;
}


void printList(Node* head) {
    while(head != NULL) {
        cout << head->data;
        if(head->next != NULL) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};

    Node* list1 = createList(arr1, 3);
    Node* list2 = createList(arr2, 3);

    cout << "List 1: ";
    printList(list1);

    cout << "List 2: ";
    printList(list2);

    Node* mergedList = merge(list1, list2);

    cout << "Merged List: ";
    printList(mergedList);

    return 0;
}
