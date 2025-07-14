#include<iostream>
#include<queue>
#include<vector>

using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node*right;

        Node(int data){
            this->data = data;
            left = NULL;
            right = NULL;
        }
};

vector<vector<int>> zigzagTraversal(Node* root){
    vector<vector<int>>ans;
    if(root == NULL) return ans;

    queue<Node*>q;
    q.push(root);
    bool flag = true;
    while(!q.empty()){
        int n = q.size();
        vector<int>temp(n);

        for(int i =0;i<n;i++){

            Node* curr = q.front();
            q.pop();

            int index = flag ? i: n-i-1;
            temp[index] = curr->data;

            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }

        }
        flag = !flag;
        ans.push_back(temp);

    }
    return ans;
}

// Example binary tree:
    //        1
    //       / \
    //      2   3
    //     / \   \
    //    4   5   6

    /*
    output
1->
3->2->
4->5->6->

    */
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    vector<vector<int>>ans = zigzagTraversal(root);

    for(int i= 0;i<ans.size();i++){
        for(int j = 0;j<ans[i].size();j++){
            cout<<ans[i][j]<<"->";
        }
        cout<<endl;
    }

    return 0;
}