/*The minimum number of functions present in any C++ program is:
0
1
2
Infinite*/
#include<iostream>
using namespace std;
int function(int n){
    for(int i = 0;i<n;i++){
        cout<< i<<endl;
    }
}
    int main(){
        int n;
        cout<<"enter any num: ";
        cin>>n;
        int a = function(n);
        cout<<a;
        return 0;
    }

