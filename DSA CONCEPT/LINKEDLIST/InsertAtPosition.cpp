#include<iostream>
using namespace std;
class node{
    public:
        int val;
        node* next;
        node(int val){
            this->val=val;
            this->next=NULL;
        }
};
class LinkedList{
    public:
        node* head;
        LinkedList(){
            head=NULL;
        }
        void insertAtTail(int val){
            node* newnode = new node(val);
            if(head==NULL){
                head = newnode;
            }
            else{
                node* temp = head;
                while(temp->next !=NULL){
                    temp = temp->next;
                }
                temp->next = newnode;
            }
        }
        void InsertAtPosition(int data, int postn){
            node* newnode = new node(data);
            node* temp = head;
            for(int i=0;i<postn;i++){
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }

        void display(){
            node* temp = head;
            while(temp!=NULL){
                cout<<temp->val<<" ";
                temp=temp->next;
            }
        }
};
int main(){
    LinkedList Sl;
    int val;
    cout<<"Enter the value of linkedlist: ";
    while(cin>> val){
            Sl.insertAtTail(val);
    }    
    Sl.display();
    cout<<endl;
    Sl.InsertAtPosition(10,2);
    Sl.display();
}
