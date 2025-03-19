#include<iostream>
#define maxsize 6
using namespace std;
int queue[maxsize];
int front=-1,rear=-1;
void insert(){
    int val;
    if(rear=maxsize-1){
        cout<<"overflow condition "<<endl;
        return;
    }
    else{
        if(front =-1)
        front=0;
        cout<<"Enter the element: ";
        cin>>val;

        rear=rear+1;
        queue[rear]=val;
    }
}
void delete1(){
    if(front==-1 || front>rear){
        cout<<"underflow condition"<<endl;
        return;
    }
    else{
        cout<<"Deleted element is: "<<queue[maxsize];
        return;
    }
}
void display(){
    if(front==-1){
        cout<<"queue is empty. "<<endl;
        return;
    }
    else{
        for(int i=front;i<=rear;i++){
            cout<<"queue[i] ";
            }

    }
}
int main(){
    int ch;
    cout<<"1.insert  2.Delete  3.display  4.exit"<<endl;
    while(1){
        cout<<"Enter your choice(1/2/3/4):";
        cin>>ch;
        switch(ch){
            case 1:insert();break;
            case 2:delete1();break;
            case 3:display();break;
            case 4:exit(0);
        }

    }
}
