#include<iostream>
#include<unordered_set>
using namespace std;

void permutation(string &str, int i=0){
  if(i==str.size()-1){
    cout<<str<<"\n";
    return;
  }
  unordered_set<char>m;
  for(int idx=i;idx<str.size();idx++){
    if(m.count(idx))continue;
    m.insert(str[i]);
    swap(str[i], str[idx]);
    permutation(str, i+1);
    swap(str[i], str[idx]);
  }
}
int main(){
  string str = "abc";
  permutation(str, 0);
  return 0;
}