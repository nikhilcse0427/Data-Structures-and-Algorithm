#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter num of students: ";
    cin>>n;
    int marks[n-1];
    cout<<"Enter marks of student: ";
    int i;
    for(i=0;i<=n-1;i++){
        cin>>marks[i];
        cout<<endl;
    }
      for(i=0;i<=n-1;i++){
        if(marks[i]<35){
            cout<<"Roll num of student get less than 35 marks: "<<i<<endl;
        }

      }
    return 0;
}