#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter any string: ";
    //cin>>str;
    getline(cin,str);
    //cin>>Name;//sort - ascii value ke order me sort karta hai
    sort(str.begin(),str.end());//sapce has less ascii value
    cout<<str;
    return 0;
}