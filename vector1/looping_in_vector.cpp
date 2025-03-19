//Find the last occurrence of x in the array.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    cout<<v.size();
    v.pop_back();
    cout<<endl;
    cout<<v.size();
    return 0;
}