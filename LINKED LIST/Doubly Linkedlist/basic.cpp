#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

class DLL{
    public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size == 0)  head = tail = temp;
        else{
            tail->next = temp;
            temp->prev=tail;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size>0){
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        else head = tail = temp;

        size++;
    }
    

    void insertAtIndex(int idx, int val){
        if(idx < 0 || idx > size) cout<<"Invalid index";
        else if(size == 0) insertAtHead(val);
        else if(idx == size - 1) insertAtEnd(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i=1;i<=idx - 1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            t->prev=temp;
            t->next->prev = t;
            size++;
        }

    }

    int getAtIndex(int idx){
        if(idx < 0 || idx >= size){
            cout<<"Invalid index";
            return -1;
        }
        else if(idx == 0) return head->val;
        else if(idx == size - 1) return tail->val;
        else{
            Node* temp = head;
            for(int i = 0;i < idx;i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }

    void deleteAtHead(){
        if(size == 0) cout<<"List is empty";
        else{
            head = head->next;
            head->prev = NULL;
            size--;
        }
    }

    void deleteAtTail(){
        if(size == 0) cout<<"List is invalid";
        else{
            Node* temp = tail->prev;
            temp->next=NULL;
            tail=temp;
            size--;
        }
    }

    void deleteAtIndex(int idx){
        if(idx == 0) return deleteAtHead();
        if(idx == size) return deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->next->prev = temp;
            size--;

        }
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){

    return 0;
}