/*Write a program to copy the contents of one
array into another in the reverse order.*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    cout<<"Elements of vector: ";
    for(int i= 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
       cout<<"Elements of  reverse of vector: ";
    for(int i= n-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    return 0;
}