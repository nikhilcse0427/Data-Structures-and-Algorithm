#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;//set unique element ko hi show karta hai
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    int target=4;
    //s.find()-> it searches in the set and if
    //it is not found the it return the last element
    if(s.find(target)!=s.end()){//target exist
        cout<<"exist"<<endl;
    }
    else{
        cout<<"does not exist"<<endl;
    }
    cout<<s.size()<<endl;//duplicate element ko count nahi karta hai size me
    //for each loop
    for(int ele : s){// : in
        cout<<ele<<" ";  
    }

}
