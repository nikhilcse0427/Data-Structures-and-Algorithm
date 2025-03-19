#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(2);
    st.push(1);
    st.push(5);
    st.push(8);
    st.push(9);

    stack<int>temp;
    while(st.size()!=1){
        int x=st.top();
        temp.push(x);
        st.pop();
    }
    cout<<st.size();

    st.push(10);
    cout<<endl;
    cout<<st.size();
    cout<<endl;

    while(!temp.empty()){
        int y=temp.top();
        st.push(y);
        temp.pop();
    }

    while(st.size()>0){
    cout<<st.top()<<" ";
    st.pop();
    }
    return 0;
}