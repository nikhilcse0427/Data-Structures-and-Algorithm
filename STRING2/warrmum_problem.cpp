/*Input a string and return the
number of times the neighbouring characters are
different from each other.*/
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter any string: ";
    cin>>str;//abbcdeffghh  aabcssrmma
    cout<<"string length: "<<str.length();
    cout<<endl;
    int count=0;
    for(int i = 0;i<str.length();i++){
        if(i==0){
            if(str[i]!=str[i+1]){
                count++;
            }
        }
        else if(i==str.length()-1){
            if(str[i]!=str[i-1]){
                count++;
            }
        }
        else if(str[i]!=str[i+1] && str[i]!=str[i-1]){
            count++;
        }
    }
    cout<<"count: "<<count;
    return 0;
}