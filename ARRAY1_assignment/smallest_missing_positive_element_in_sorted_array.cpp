/*WAP to find the smallest missing positive element
in the sorted Array that contains only positive element.*/
#include<iostream>
using namespace std;
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main(){
    int a,b,temp;
    int n;
    cout<<"Enter num of elements in array: ";
    cin>>n;
    int i,arr[n];
    for(i=0;i<=n-1;i++){
        cout<<"The value of array"<<"["<<i<<"] = ";
        cin>>arr[i];
    }
    //sort
    for(i=0;i<=n-1;i++){
        if(arr[i]<arr[i+1]){
            swap(arr[i], arr[i + 1]);
            cout << arr[i] << "," << arr[i + 1] << endl;

        }
    }
    return 0;
}
