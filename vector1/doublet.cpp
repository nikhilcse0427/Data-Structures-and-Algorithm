/*Find the doublet in the Array whose sum is
equal to the given value x.*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    cout<<"Elements of vector: ";
    for(int i= 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int s;
    cout<<"Enter any doublet sum: ";
    cin>>s;
    for(int x = 0;x<n; x++){
        for(int y = 0;y<n;y++){
            if(v[x]+v[y]==s){
                cout<<"("<<x<<","<<y<<")"<<" ";
            }
        }
    }
    return 0;
}