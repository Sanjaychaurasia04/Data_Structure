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

Node* tree(){
    int data;
    cout<<"Enter the data you wnat to insert at the root node :" <<endl;
    cin>>data;
    if(data ==-1){
        return NULL;
    }
    Node* root = new Node(data);

    cout<<"Enter the data you want to insert at the left :"<<data<<endl;
    root->left  =tree();
    
    cout<<"Enter the data you want to insert at the right :"<<data<<endl;
    root->right = tree();

    return root;
    
}
void preorderTraversal(Node* root){
    if(root == NULL) return;
    cout<<root->data<<"   ";

    preorderTraversal(root->left);
    preorderTraversal(root->right);
   

}

void Postorder(Node* root){
    if(root  == NULL) return;

    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data <<"   ";
}

void inorderTraversal(Node* root){
    if(root == NULL) return;
    inorderTraversal(root->left);
    cout<<root->data<<"   ";
    inorderTraversal(root->right);
}

void LevelorderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node* newnode = q.front();
        q.pop();


        if(newnode ==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<newnode->data<<"  ";
            if(newnode->left != NULL){
                q.push(newnode->left);

            }
            if(newnode->right != NULL){
                q.push(newnode->right);
            }
        }
    }
}
int main(){
    Node* root  = tree();
    cout<<"Preoder Traveral :  ";
    preorderTraversal(root);

    cout<<endl<<"Postoder traversal : ";
    Postorder(root);

    cout<<endl<<"Inorder traversal :";
    inorderTraversal(root);

    cout<<endl<<"Level order Traversal : ";
    LevelorderTraversal(root);


    return 0;
}