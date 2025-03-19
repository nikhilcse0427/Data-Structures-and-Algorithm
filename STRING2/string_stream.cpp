//STRING STREAM -  NIKHIL VERMA IS STUDENT
// NIKHIL     VERMA IS STUDENT
//COUNT NUMBER OF WORDS
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str = "nikhil verma is student";
    int count=1;
    for(int i = 0;i<str.length();i++){
        if(str[i]== ' '){
            count++;
        }
    }
    cout<<"count = "<<count;
    return 0;
}