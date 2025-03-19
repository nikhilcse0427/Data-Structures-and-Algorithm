#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter any string: ";
    cin>>str;
    cout<<str;
    //NOT PRINT FULL STRING ONLY PRINT TILL FIRST SPACE COMES
    getline(cin,str);//USE getline(cin,string variable name) to print full string input  with space
    cout<<str;
    cout<<endl;
    int a,b;
    cin>>a;
    cin>>b;
    cout<<a<<" "<<b;
    return 0;
}