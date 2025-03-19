#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter length of array: ";
    cin>>n;
    int arr[20];
    cout<<"enter the elements of array in sorted form: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    int indx;
    cout<<"enter num to be inserted: ";
    cin>>num;
    for(int i=0;i<n;i++){
        if(num>arr[i] && num<arr[i+1]){
             indx =i;
            break;
        }
    }
    arr[indx]=num;
    for(int i=n+1;i>indx+1;i--){
        arr[i+1]=arr[i];
    }
    cout<<"after insertion: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
