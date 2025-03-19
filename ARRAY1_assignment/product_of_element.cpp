//Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the num of elements: ";
    cin>>n;
    int arr[n];
    int i,product=1;
    for(i=0;i<=n-1;i++){
        cout<<"enter elements"<<"arr"<<"["<<i<<"]"<<" = ";
        cin>>arr[i];
        product*=arr[i];
    }   
    cout<<"product of elements array = "<<product;
    return 0;
}