#include<iostream>
#include<stack>
using namespace std;
int prio(char ch){
    if(ch=='+' || ch=='-')return 1;
    else if(ch=='*'|| ch=='/')return 2;
    else return -1;
}
string solve(string val1,string val2,char ch){
    string s="";
    s.push_back(ch);
    s+=val1;
    s+=val2;
    return s;
}
int main(){
    string s="(7+9)*4/8-3";
    stack<string>val;
    stack<int>op;
    for(int i=0;i<s.length();i++){
        if(s[i]>=48  && s[i]<=57){//ASCII VALUE 0-9 = 48 -57
            val.push(to_string(s[i]-48));//to_string(x)->CONVERT DATATYPE OF X INTO STRING DATA TYPE
        }
        else{
            if(op.empty())op.push(s[i]);
            else if(s[i]=='(')op.push(s[i]);
            else if(op.top()=='(')op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    char ch=op.top();
                    op.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans=solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop();//OPENING BRACKET KO BHI UDA DIYA
            }
            else if(prio(s[i])>prio(op.top()))op.push(s[i]);
            else{
                while(op.size()>0 && prio(s[i])<=op.top()){
                     char ch=op.top();
                    op.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans=solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while(op.size()>0){
    char ch=op.top();
    op.pop();
    string val2=val.top();
    val.pop();
    string val1=val.top();
    val.pop();
    string ans=solve(val1,val2,ch);
    val.push(ans);
    }
    cout<<val.top()<<endl;
    return 0;
}