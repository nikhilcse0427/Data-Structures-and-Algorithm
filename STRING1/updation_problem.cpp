/*Input a string of size n and Update all
the even positions in the string to character
‘a’. Consider 0-based indexing.*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="shivnarayanpur";
    int i = 0;
    while(str[i]!='\0'){
        if(i%2==0 && i!=0){
            str[i]='a';
        }
        i++;
    }
    cout<<str;
    return 0;
}