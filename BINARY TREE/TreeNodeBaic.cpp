#include<iostream>
using namespace std;
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
/*NULL node typically represents an empty subtree or a leaf node without children.
 When the function encounters a NULL node, it means there are no more nodes to 
 process in the current branch of the tree.*/
void display(node* root){
    if(root==NULL)return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int count = 0;
int size(node* root){
    if(root==NULL)return 0;
    count++;
    size(root->left);
    size(root->right);
    return count;
}
//or
/*int sizeTree(Node* root){
    if(root==NULL)return 0;
    int smLft = sizeTree(root->left);
    int smRght = sizeTree(root->right);
    int size1  = 1 + smLft + smRght;
    return size1;
}*/
int maxVal(node* root){
    if(root==NULL)return 0;
    int left=maxVal(root->left);
    int right=maxVal(root->right);
    int max1 =max(root->val,max(left,right));
    return max1;
}
int minVal(node* root){
    if(root==NULL)return 0;
    int left=minVal(root->left);
    int right=minVal(root->right);
    int min1 =min(root->val,min(left,right));
    return min1;
}
int ValSum(node* root){
    if(root==NULL)return 0;
    int left = ValSum(root->left);
    int right = ValSum(root->right);
    int sum = root->val + left + right;
    return sum;
}
int main(){
    node* a = new node(5);
    node* b = new node(9);
    node* c = new node(2);
    node* d = new node(3);
    node* e = new node(10);
    node* f = new node(4);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    cout<<"Value of each node of tree: ";
    display(a);
    int ans1=size(a);
    cout<<endl<<"Size of tree: "<<ans1<<endl;
    int ans2 = maxVal(a);
    cout<<"maximum value: "<<ans2<<endl;
    int ans3 = minVal(a);
    cout<<"minimum value: "<<ans3<<endl;
    int ans4 = ValSum(a);
    cout<<"Sum of tree: "<<ans4;
    return 0;
}