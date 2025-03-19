#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    // pair<string,int>p;
    // p.first="Nikhil";
    // p.second=100;
    // m.insert(p);
    // for(pair<string,int> ele:m){
    //     cout<<ele.first<<" "<<ele.second<<endl;
    // }
    m["Nikhil"]=100;
    m["Sunder Pichae"]=99;
    m["Kushangi"]=97;
    m["Kartik"]=98;
    cout<<m.size()<<endl;
    for(auto ele:m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    cout<<m.size()<<endl;
    m.erase("Kushangi");
    cout<<m.size()<<endl;
    return 0;
}