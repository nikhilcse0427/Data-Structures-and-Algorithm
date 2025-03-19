#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char ch[100];
    ifstream take("file1.txt");
    take.getline(ch,100);
    take.close();
    cout<<ch;
    return 0;
}