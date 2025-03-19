#include<iostream>
using namespace std;
class heap{
    public:
        int arr[100];
        int size;

        heap(){
            arr[0]=-1;
            size=0;
        }
    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;

    while(index>1){
        int parent = index/2;
        if(arr[index]>arr[parent]){
            swap(arr[index], arr[parent]);
            index = parent;
        }
        else{
            return;
        }
    }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void deletefromHeap(){
        if(size==0){
            cout<<"nothing to delete"<<endl;
            return;
        }

        //put last element to first index
        arr[1]==arr[size];

        //remove last element
        size--;

        //take root node to its correct position
        int i=1;
        while(i<size){
            int leftIndex=2*1;
            int rightIndex=(2*i+1);

            (leftIndex < size && arr[i]<arr[leftIndex]){
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
};
int main(){
    heap h;
    h.insert(8);
    h.insert(88);
    h.insert(87);
    h.insert(89);
    h.insert(90);
    h.print();
    h.deletefromHeap();
    h.print();
    return 0;
}