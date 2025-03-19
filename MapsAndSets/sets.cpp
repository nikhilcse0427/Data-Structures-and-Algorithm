#include <iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;//set store unique element if we store two times it will print only one time and size will be same
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    int target=5;
    if(s.find(target)!=s.end()){
        cout<<"true";
    }
    else{
        cout<<endl;
    }
    cout<<endl;
    for(int ele:s){
        cout<<ele<<" ";
    }
    cout<<endl;
    s.insert(1);
    cout<<s.size();
}


