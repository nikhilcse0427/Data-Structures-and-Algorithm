#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream write("file2.txt");
    write<<"JAI MAA SHRAWATI";
    write.close();

    ifstream read("file1.txt");
    char ch[100];
    read.getline(ch,100);
    read.close();
    cout<<ch;
    return 0;
}