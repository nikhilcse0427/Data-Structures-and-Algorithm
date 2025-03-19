//elements in array can be organised randomly  or sorted
//Time complexity = O(n)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Length of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the elements of array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int num,position;
    cout<<"\nenter num you want to search: ";
    cin>>num;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            flag=true;
            position = i;
            break;
        }
        else{
            flag;
        }
    }
    if(flag==true){
        cout<<"num present at index: "<<position;
    }
    else{
        cout<<"num not present";
    }
    return 0;
}

//ANOTHER METHOD


/*#include <iostream>

using namespace std;

int main()
{
    int a[20],n,no,i;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the Elements: \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the number You want To Search: ";
    cin>>no;
    for(i=0;i<n;i++)
    {
        if(a[i]==no)
        {
            cout<<"The Number Present in Location :"<< i+1;
            break;
        }
    }
    if(i==n)
    {
        cout << "The Number is not Present in the array";
    }

    return 0;
}*/