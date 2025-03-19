#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(50);
    st.push(55);
    st.push(85);
    st.push(99);
    cout<<st.size()<<endl;
    stack<int> temp;
    
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x= st.top();
        temp.push(x);
        st.pop();
    }
    return 0;
}
