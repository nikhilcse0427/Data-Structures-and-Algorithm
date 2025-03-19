#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"number of string: ";
    cin>>n;
    string str;
    for(int i = 0;i<n;i++){
        cout<<"string"<<i<<" - ";
        cin>>str;
    }
    return 0;
}

