#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList
{
public:
    node *head;
    LinkedList()
    {
        head = NULL;
    }
    void insertAtTail(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = newnode;
            newnode->next = newnode;
        }
        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
    }
    void deleteNode(int posn){
        node *temp = head;
        node *prev = NULL;
        for (int i = 0; i < posn; i++){
            prev = temp;
            temp = temp->next;
        }
        if (prev == NULL){
            head = temp->next;
        }
        else{
            prev->next = temp->next;
        }
        // Make sure that the last node points to the head node.
        if (temp == head){
            prev->next = head;
        }
        delete temp;
    }
};
int main()
{
    LinkedList Sl;
    int val;
    cout << "Enter the values of linkedlist: ";
    while (cin >> val){
        Sl.insertAtTail(val);
    }
    Sl.display();
    cout << endl;
    cout << "After deletion";
    Sl.deleteNode(2);
    Sl.display();
}