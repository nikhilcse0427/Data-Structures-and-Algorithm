/*Given two strings s and t, return true if t is an
anagram of s, and false otherwise.*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s,t;
    cout<<"enter any string s: ";+
    cin>>s;
    cout<<"enter any string t: ";
    cin>>t;//ANAGRAM IS TWO WORDS HAVIN SAME LETTER
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        cout<<"anagram";
    }
    else{
        cout<<"not analgram";
    }
    return 0;
}