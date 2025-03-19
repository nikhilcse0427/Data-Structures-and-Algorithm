#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>m;
    pair<string,int>p1;
   /* p1.first = "Nikhil";
    p1.second = 100;
    pair<string,int>p2;
    p2.first = "kushangi";
    p2.second = 85;
    pair<string,int>p3;
    p3.first = "Sunder";
    p3.second = 98;
    pair<string,int>p4;
    p4.first = "Bharat";
    p4.second = 82;
    m.insert(p4);
    m.insert(p2);
    m.insert(p3);
    m.insert(p1);*/
    m["Kushangi"]=85;
    m["Sunder"]=98;
    m["Bharat"]=82;
    m["Nikhil"]=100;
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    m.erase("Kushangi");//key and value both will be deleted
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size();

}
