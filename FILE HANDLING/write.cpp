#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream greet("file1.txt");
    greet<<"Jai Shree RAM";
    greet.close();
    cout<<"file sucessfully created";
    return 0;
}