#include<iostream>
using namespace std;
int main(){
    char str[6]={'R','A','M','\0','A','N'};
    cout<<str<<endl;
    cout<<(int)(str[3]);
    cout<<endl;
    for(int i=0;i<6;i++){
        cout<<str[i];
    }
    //if there is "\n" then printing stop
    cout<<endl;
   

    cout<<endl;
    cout<<"SITA\nRAM\tLAXMAN"<<endl;
    //"\n" is used to jump on next line
    //"\t" is used for tab mean 4 space
    //EVERY THING INSIDE  DOUBLE COTE " " IS CALEED STRING AND ' '  STRING
    cout<<str[6]<<" "<<(int)(str[6]);

    return 0;
}