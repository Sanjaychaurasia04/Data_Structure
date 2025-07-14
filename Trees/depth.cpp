#include<iostream>
#include<vector>

using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    Node(int data){
        this->data = data;
        right = NULL;
        left = NULL;
    }
};

int depth(Node* root){
    if(root == NULL) return 0;

    int leftans  = depth(root->left);
    int rightans = depth(root->right);
    int ans = max(leftans , rightans)+1;
    return ans;

}
//  Binary Tree:
    //         1
    //        / \
    //       2   3
    //      / \
    //     4   5



int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    int treeDepth = depth(root);
    cout << "Depth of the binary tree: " << treeDepth << endl;

    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;
    return 0;
}