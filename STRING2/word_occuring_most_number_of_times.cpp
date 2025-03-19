#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str;
    cout<<"Enter any string: ";
    getline(cin,str);
    stringstream ss(str);
    string temp;
    vector<int> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    return 0;
}
