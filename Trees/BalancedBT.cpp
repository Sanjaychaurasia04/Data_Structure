#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


int depth(Node* root){
    if(root == NULL) return 0;
    int leftans  = depth(root->left);
    int rightans = depth(root->right);
    int ans = max(leftans , rightans)+1;
    return ans;
}
bool isBalanced(Node* root) {
    if(root == NULL) return true;
    int leftans = depth(root->left);
    int rightans = depth(root->right);
    int ans = abs(leftans - rightans);
    bool diff  = ans<=1;
    bool lefta = isBalanced(root->left);
    bool righta = isBalanced(root->right);
    if(lefta && righta && ans <=1){
        return true;
    }
    else return false;
    
}



int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    bool ans = isBalanced(root);
    cout<<ans;

    return 0;
}