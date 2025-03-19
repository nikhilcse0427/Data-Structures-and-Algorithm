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
                while(temp->next != NULL){
                    temp = temp->next;
                }
                temp->next = newnode;
            }
        }
        void display(){
            node* temp = head;
            while(temp != NULL){
                cout<<temp->val<<" ";
                temp= temp->next;
            }
        }
        void deleteNode(int postn){
            node* temp = head;
            for(int i=0;i<postn;i++){
                temp= temp->next;
            }
            temp->next= (temp->next)->next;
        }
};
int main(){
    LinkedList Sl;
    int val;
    cout<<"Enter the values of linkedlist: ";
    while(cin>>val){
        Sl.insertAtTail(val);
    }
    Sl.display();
    cout<<endl;
    cout<<"After deletion";
    Sl.deleteNode(2);
    Sl.display();
}