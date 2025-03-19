#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

    void display(Node* temp ){
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }

    int size(Node* temp ){
        int n = 0;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        return n;
    }

    void insertAtEnd(Node* head, int val){
        Node* temp = new Node(val);
        while(head->next != NULL) head = head->next;
        head->next = temp;
    }
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;

    Node* head = a;
    display(head);
    cout<<endl;
    cout<<"Size: "<<size(head)<<endl;

    insertAtEnd(head,99);
    display(head);
    return 0;
}