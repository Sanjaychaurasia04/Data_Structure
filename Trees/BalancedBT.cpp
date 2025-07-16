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
    if(root == NULL ) return true;

    int leftdepth = depth(root->left);
    int rightdepth = depth(root->right);

    int ans = abs(leftdepth - rightdepth);

    bool leftans = isBalanced(root->left);
    bool rightans = isBalanced(root->right);

    if(ans <= 1 && leftans && rightans ){
        return true;
    }
    else{
        return false;
    }
    
}

//  Binary Tree:
    //         1
    //        /   \
    //       2     3
    //      / \    /  \
    //     4   5   6   7

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    bool ans = isBalanced(root);
    cout<<ans;

    return 0;
}