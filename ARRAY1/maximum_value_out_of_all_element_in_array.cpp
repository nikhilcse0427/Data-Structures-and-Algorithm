#include<iostream>
using namespace std;
int main(){
    int arr[8]={9,100,1,2,102,4,5,6};
    int max=arr[0];
    int i;
    for(i=1;i<=7;i++){
        if(max<=arr[i]){
            max=arr[i];
           //x break;
        }
        cout<<"max: "<<max;
    }
    return 0;
}