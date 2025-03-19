#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Banglore";
    int k;
    cout<<str.size();
    cout<<endl;//string length =stringname.size()
    //does not include '\0' in size only include effective length
    str.push_back('i');
    //push_back() adds new chracter at the end of string
    //string name.push_back('chracter')
      cout<<str;
      cout<<endl;
      str.pop_back();
      cout<<str;
      cout<<endl;   
      //pop_back deletes last chracter of string
      //string name.pop_back()
      cout<<str + "INDIA";
      cout<<endl;
      cout<<"INDIA"+ str;
      //we cannot add number
      string str="rohan";
      cout<<reverse(str.begin(),str.end());
      return 0;
}