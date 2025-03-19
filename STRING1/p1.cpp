/*Input a string of even length and
reverse the first half of the string.*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="nikhil";
    cout<<str;
    cout<<endl;
    cout<<reverse(str.begin(),str.begin()-2);
    return 0;
}