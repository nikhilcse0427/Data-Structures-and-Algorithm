
#include<iostream>
#include<unordered_set>
#include<set>
using namespace std;
int main(){
    unordered_set<int>s;//set only store unique element
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(1);
    int target = 4;
    if(s.find(target)!=s.end()){
        cout<<"exist"<<endl;
    }
    else{
        cout<<"not exist"<<endl;
    }
    cout<<"size = "<<s.size()<<endl;//not include duplicate element in size
    s.erase(2);//will erase the value
    //for each loop
    cout<<"element in set s"<<endl;
    for(int ele : s){   //: in
        cout<<ele<<" ";
    }
    cout<<endl;

}