#include<iostream>
using namespace std;
class Node{  //user defined data
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size == 0)  head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size>0){
            temp->next = head;
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
            size--;
        }
    }

    void deleteAtTail(){
        if(size == 0) cout<<"List is invalid";
        else{
            Node* temp = head;
            for(int i=1;i<size-1;i++){
                temp = temp->next;
            }
            temp->next = NULL;
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
    LinkedList l1;
    l1.insertAtEnd(99);
    l1.insertAtEnd(999);
    l1.insertAtEnd(9999);
    l1.insertAtEnd(99999);
    l1.display();
    // cout<<"Size: "<<l1.size<<endl;
    // l1.insertAtHead(98);
    // l1.display();
    // cout<<"size: "<<l1.size<<endl;
    l1.insertAtIndex(1,99);
    l1.display();
    //cout<<endl;
    // cout<<l1.getAtIndex(2);
    // cout<<endl;
    // l1.deleteAtIndex(2);
    // l1.display();
    return 0;
}