/*Given n strings consisting of lowercase
English alphabets. Print the character that is
occurring most number of times.*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str="leetcode";
    vector<int>vt(26,0);
    for(int i= 0;i<str.length();i++){
        char ch = str[i];
        int ascii = (int)ch;
        vt[ascii-97]++;
    }
    int max = 0;
    for(int i = 0;i<26;i++){
        if(vt[i]>max){
            max=vt[i];
        }
    }
    for(int i=0;i<26;i++){
        if(max==vt[i]){
            int ascii =i+97;
            char ch = (char)ascii;
            cout<<ch<<" "<<max;
        }
    }
    return 0;
}