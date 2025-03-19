#include<iostream>
using namespace std;
class Heap{
    public:
        int arr[100];
        int size;
    Heap(){
        arr[0] = -1;
        size = 0;
    }
    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent =index/2;
            if(arr[index]>arr[parent]){
                swap(arr[index], arr[parent]);
                index = parent;
            }
            else{
                return;
            }          
        }
    }
    void deletefromHeap(){
        if(size==0){
            cout<<"nothing is available to be deleted"<<endl;
        }
        arr[1]=arr[size];
        size--;

        int i=1;
        while(i<size){
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;

            if(leftIndex < size && arr[i]<arr[leftIndex]){
                swap(arr[i], arr[leftIndex]);
                i=leftIndex;
            }
            else if(rightIndex < size && arr[i]<arr[rightIndex]){
                swap(arr[i], arr[rightIndex]);
                i=rightIndex;
            }
            else{
                return;
            }
        }

    }
    void display(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
            cout<<endl;
    }
};
 void Heapify(int arr[],int n,int i){
        int largest = i;
        int left = 2*i;
        int right = 2*i + 1;

        if(left <= n && arr[largest] < arr[left]){
            largest = left;
        }
        if(right <= n && arr[largest] < arr[right]){
            largest = right;
        }
        if(largest != i){
            swap(arr[largest],arr[1]);
            Heapify(arr, n, largest);
        }
    }
    void heapSort(int arr[],int n){
        int size=n;
        while(size>1){
            swap(arr[size],arr[1]);
            size--;
            Heapify(arr,size,1);
        }
    }
int main(){
    /*Heap h;
    int n;
    cout<<"num of nodes you want to make: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        int num;
        cin>>num;
        h.insert(num);
    }
    h.display();*/
    int n=5;
    int arr[n]={-1,54,53,55,52,50};
    for(int i=n/2;i>0;i--){
        Heapify(arr,n,i);
    }
    cout<<"after heapify: ";
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    heapSort(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}