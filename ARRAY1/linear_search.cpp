#include<iostream>
using namespace std;
int main(){
    int arr[5]={9,0,8,1,3};
    int x;
    cout<<"enter any element: ";
    cin>>x;
    int i;
    for(i=0;i<=4;i++){
        if(arr[i]==x){
            cout<<"present";
            break;
        }
        else{
            cout<<"not present";
            break;
        }
    }
    return 0;
}