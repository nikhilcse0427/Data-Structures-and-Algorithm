#include <iostream>
#include <vector>
using namespace std;
    void merge(vector<int> &a, vector<int> &b, vector<int>& v){
        int i = 0, j = 0, k = 0;
        while (i < a.size() && j < b.size()){
            if (a[i] < b[j]){
                v.push_back(a[i]);
                i++;
            }
            else{
                v.push_back(b[j]);
                j++;
            }
        }
        while(i<a.size()){
            v.push_back(a[i]);
            i++;
        }
        while(j<b.size()){
            v.push_back(b[j]);
            j++;
        }
    }
    
    void mergeSort(vector<int> &v){
        int n = v.size();
        if (n == 1)
            return;
        int n1 = n / 2, n2 = n - n / 2;
        vector<int> a(n1), b(n2);
        for (int i = 0; i < n1; i++){
            a[i] = v[i];
        }
        for (int i = 0; i < n2; i++){
            b[i] =v [i+n1];
        }
        mergeSort(a);
        mergeSort(b);
        v.clear();
        merge(a, b, v);
} 
int main(){
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of vector: ";
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    mergeSort(v);
    cout << "Sorted vector: ";
    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    return 0;
}