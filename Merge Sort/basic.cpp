#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"enter the value of n1 and n2: ";
    cin>>n1>>n2;
    int a[n1],b[n2];
    cout<<"enter the elements of a: ";
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    cout<<"enter the elements of b: ";
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    int alen,blen;
    alen = sizeof(a)/sizeof(a[0]);
    blen = sizeof(b)/sizeof(b[0]);
    int n3;
    n3=alen+blen;
    int c[n3];
    for(int i=0;i<n1;i++){
        c[i]=a[i];
    }
    for(int i=0;i<n2;i++){
        c[n1+i]=b[i];
    }
    cout<<"after merging\n";
    for(int i=0;i<n3;i++){
        cout<<c[i]<<" ";
    }
    cout<<"\nAfter sorting: ";
    for(int i=0;i<n3;i++){
        for(int j=i+1;j<n3;j++){
            if(c[i]>c[j]){
                swap(c[i],c[j]);
            }
        }
    }
    cout<<"\nAfter sorting: ";
     for(int i=0;i<n3;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}