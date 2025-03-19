/*ake a, b, c as input and print the following pattern:
a = 3, b = 4, c = 5

*
**
***
*
**
***
****
*
**
***
****
*****

*/
#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=3;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
        for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
        for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}