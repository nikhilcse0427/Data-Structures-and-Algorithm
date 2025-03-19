#include<iostream>
using namespace std;
class node{
    public:
        int val;
        node* next;
        node* prev;
        node(int val){
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};
class LinkedList{
    public:
        node* head;
        LinkedList(){
            head=NULL;
        }
        void insertAtHead(int val){
            node* newnode = new node(val);
            newnode->next = head;
            head->prev=newnode;

        }
        void insertAtIndex(int val){
            node* newnode = new node(val);
            if(head==NULL){
                
            }
        }
};