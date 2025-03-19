#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(2);
    st.push(1);
    st.push(8);
    st.push(9);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;

    while(st.size()>0){
    cout<<st.top()<<" ";
    st.pop();
    }

    return 0;
}
