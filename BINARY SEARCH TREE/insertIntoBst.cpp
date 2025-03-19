#include<iostream>
using namespace std;
int m;
class node{
    public:
        int val;
        node* right;
        node* left;
    node(int val){  
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void display(node* root){
    if(root==NULL)return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
node* insert(node* root,int val){
    if(root==NULL) return new node(val);
    else if(root->val>val){
        if(root->left==NULL){
            root->left=new node(val);
        }
        else insert(root->left,val);
    }
    else{
            if(root->left==NULL){
            root->left=new node(val);
        }
            else insert(root->left,val);
    }
            return root;
        }


int main(){
    node* a = new node(10);
    node* b = new node(5);
    node* c = new node(15);
    node* d = new node(2);
    node* e = new node(8);
    node* f = new node(12);
    node* g = new node(18);
    node* h = new node(6);
    node* j = new node(13);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    e->left = h;
    c->left = f;
    c->right = g;
    f->right =j;

    cout<<"VALUE of each nodes of tree: ";
    display(a);
    cout<<endl;
    cout<<"Enter the element you want to insert: ";
    cin>>m;

    node*result = insert(a,m);
    cout<<endl;
    display(a);
    return 0;
}