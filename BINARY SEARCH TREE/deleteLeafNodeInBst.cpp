#include<iostream>
using namespace std;
class node{
    public:
        int val;
        node* left;
        node* right;
    node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void display(node* root){
    if(root==NULL)return;
    cout<<root->val<<" ";    //PREORDER - (N,L,R)
    display(root->left);
    //cout<<root->val<<" ";  INORDER - (L,N,R)
    display(root->right);
    //cout<<root->val<<" ";  POSTORDER - (L,R,N)
}

node* deleteNode(node* root,int target){
    if(root->val==target)return NULL;
    
    else if(root->val>target){
        root->left=deleteNode(root->left,target);
    }
    else{
        root->right=deleteNode(root->right,target);
    }
    return root;
}
int main(){
    node* a=new node(10);
    node* b=new node(5);
    node* c=new node(20);    
    node* d=new node(2);   
    node* e=new node(8);
    node* f=new node(15);
    node* g=new node(25);  
    node* h=new node(4);  
    node* i=new node(12);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    d->right=h;
    c->left=f;
    c->right=g;
    f->left=i;

    cout<<"Value of BST: ";
    display(a);
    cout<<endl;
    int target;
    cout<<endl;
    cout<<"Enter target: ";
    cin>>target;
    deleteNode(a,target);
    cout<<endl;
    display(a);
    return 0;
}