#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(2);
    st.push(1);
    st.push(5);
    st.push(8);
    st.push(9);
    int y= st.size();
    
    stack<int>temp;

    int x;
    while(!st.empty()){
        x=st.top();
        temp.push(x);
        st.pop();
    }

    while(!temp.empty()){
    cout<<temp.top()<<" ";
    temp.pop();
    }
    return 0;
}