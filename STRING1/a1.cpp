#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main() {
    char s[20];
    
    cout << "Enter data: ";
    cin.getline(s, sizeof(s)); 
    
    ofstream of("file.txt");
    
    of << s;
    of.close();
    
    cout << "Data saved to file.txt\n";
    
    ifstream inf("file.txt");
    
    inf >> s;
    cout << "Data read from file.txt: " << s << endl;
    
    inf.close();
    
    return 0;
}