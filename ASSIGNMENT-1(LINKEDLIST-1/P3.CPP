#include<iostream>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class LinkList{
    public:
        Node* head;
        Node* tail;
        int size;
    LinkList(){
        head=tail=NULL;
        size=0;
    }

     void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
        tail->next=temp;
        tail=temp;
        }
        size++;

    }

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            temp->next = head;
            head=temp;
        }
        size++;
    }

    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            tail->next = temp;
        }
        size++;
        cout<<endl;
    }

    void insertAtIndex(int indx, int val){
        if(indx<0 || indx>size){
            cout<<"Invalid";
        }
        else if(indx==0){
            insertAtHead(val);
        }
        else if(indx==size-1){
            insertAtTail(val);
        }
        else{
            Node* t = new Node(val);
            Node* temp=head;
            for(int i=1;i<indx;i++){
                temp = temp->next;
            }
            t->next=temp->next;
            temp->next=t;
        size++;
        cout<<endl;
        }
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void deleteAtHead(){
        if(size==0){
            cout<<"Invalid";
            return;
        }
        else{
            head = head->next;
            size--;
        }
    }

    
    void deleteAtTail(){
        Node* temp;
        temp=head;
        if(size==0){
            cout<<"Invalid";
        }
        else{
            while(temp->next!=tail){
                temp=temp->next;
            }
            temp->next=NULL;
        }
    }

    void deleteAtIndex(int indx){
        if(indx < 0 || indx >size){
            cout<<"Invaalid index";
            return;
        }
        else if(indx==0){
            deleteAtHead();
        }
        else if(indx==size-1){
            deleteAtTail();
        }
        else{
            Node* temp=head;
            for(int i=1;i<=indx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
    void get(int indx){
        Node* temp=head;
        for(int i=0;i<indx;i++){
            temp=head->next;
        }
        cout<<temp->val;
    }
};
int main(){
    LinkList l1;
    l1.insertAtEnd(10);
    l1.insertAtEnd(20);
    l1.insertAtEnd(30);
    l1.insertAtEnd(40);
    l1.insertAtHead(100);
    l1.insertAtIndex(2,20);
    l1.display();
    l1.deleteAtHead();
    l1.display();
    l1.deleteAtTail();
    l1.display();
    l1.deleteAtIndex(1);
    l1.display();
    l1.get(2);
    return 0;
}