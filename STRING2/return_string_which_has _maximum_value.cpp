/*Given n string consisting of digits from
0 to 9. Return the index of string which has
maximum value. (Take 0 based indexing)*/
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