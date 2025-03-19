#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    void insertAtTail(int val) {
        Node* newcode = new Node(val);
        if (head == NULL) {
            head = newcode;
        }
        else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newcode; // Corrected line
        }
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList Sl;
    int val;
    cout << "Enter the value of each node (enter a non-integer to stop): ";
    while (cin >> val) {
        Sl.insertAtTail(val);
    }
    cout << "Elements of linked list: ";
    Sl.display();
    return 0;
}
