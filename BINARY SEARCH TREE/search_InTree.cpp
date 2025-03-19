#include<iostream>
using namespace std;
int s;
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
    if(root==NULL)return ;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
node* search(node* root, int s){
    if(root==NULL)return NULL;
    else if(root->val==s) return root;
    else if(root->val>s) return (search(root->left,s));
    else return (search(root->right,s));
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
    node* i = new node(11);
    node* j = new node(13);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    e->left = h;
    c->left = f;
    c->right = g;
    f->left = i;
    f->right =j;

    cout<<"VALUE of each nodes of tree: ";
    display(a);
    cout<<endl;
    cout<<"Enter the value you want to search: ";
    cin>>s;
    node* result = search(a,s);
    if(result!=NULL){
        cout<<"element present in BST";
    }
    else{
        cout<<"element not present";
    }
    return 0;
}