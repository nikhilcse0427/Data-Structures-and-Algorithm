#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void display(Node* root){
    if(root == NULL) return;
    cout<<root->val;
    display(root->left);
    display(root->right);
}

int sum(Node* root){
    if(root==NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}

int size(Node* root){
    if(root == NULL) return 0;
    // int left = size(root->left);
    // int right = size(root->right);
    // int ans =1+left+right;
    // return ans;
    return 1+size(root->left)+size(root->right);
}

int maxNode(Node* root){
    if(root==NULL) return 0;
    return max(root->val,max (maxNode(root->left),maxNode(root->right)));
}

int level(Node* root){
    if(root == NULL) return 0;
    return 1 + max(level(root->left),level(root->right));
}

// print nth level element

void print(Node* root, int curr, int level){
    if(root==NULL) return;
    if(curr == level) cout<<root->val<<" ";
    print(root->left,curr+1,level);
    print(root->right,curr+1,level);

}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    display(a);
    cout<<endl;
    cout<<size(a)<<endl;
    cout<<sum(a)<<endl;
    cout<<maxNode(a)<<endl;
    print(a,1,2);
    return 0;
}