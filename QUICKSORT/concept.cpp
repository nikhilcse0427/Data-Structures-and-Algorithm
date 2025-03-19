#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivot=arr[si];
    int count = 0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    //place pivot at right index
    int pivotindex = count + si;
    swap(arr[pivotindex],arr[si]); 

    //left and right part of pivot ko sambhal lete hai
    int i =si;
    int j=ei;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
    if(i<pivotindex && j>pivotindex){
        swap(arr[i++],arr[j--]);
     }
    }

    return pivotindex;
}
void quickSort(int arr[],int si,int ei){
    //base case
    if(si>=ei)return;

    //partition
    int pi=partition(arr,si,ei);

    //left part sort karo
    quickSort(arr,si,pi-1);



    //right part sor karo
    quickSort(arr,pi+1,ei);

}
int main(){
    int arr[5]={2,4,1,6,9};
    int n=5;
    quickSort(arr,0,n-1);
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}