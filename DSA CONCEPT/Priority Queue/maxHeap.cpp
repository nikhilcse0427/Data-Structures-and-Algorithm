#include<iostream>
using namespace std;
#include<vector>

class Heap{
public:
  vector<int>heap;

  void display(){
    cout<<"[";
    for(int i=0;i<heap.size();i++){
      cout<<heap[i]<<" ";
    }
    cout<<"]";
  }

  bool empty(){
    return this->heap.size()==0;
  }

  void push(int el){
    heap.push_back(el);
    upheapify(heap.size()-1);
  }

  void pop(){
    if(empty()) return;
    swap(heap[0],heap[heap.size()-1]);
    heap.pop_back();
    downHeapify(0);
  }

  void upheapify(int ci){
    while(ci>0){
      int pi =(ci-1)/2;
      if(heap[ci]>heap[pi]){
      swap(heap[ci],heap[pi]);
      ci=pi;
    }
    else{
      break;
    }
  }
  }

  void downHeapify(int idx){
    while(idx < heap.size()-1){
      int lc=2*idx+1;
      int rc=2*idx+2;
      if(lc > heap.size()-1) break;
      int max = idx;
      if(lc < heap.size()  && heap[max] < heap[lc]){
        max=lc;
      }
      else if(rc < heap.size()  && heap[max] < heap[rc]){
        max=rc;
      }
      else if(max != idx){
        swap(heap[max],heap[idx]);
        idx=max;
      }
      else{
        break;
      }

    }
  }

};

int main(){
  Heap hp;
  hp.push(85);
  hp.push(82);
  hp.push(83);
  hp.push(81);
  hp.push(88);
  hp.push(89);
  hp.display();
  return 0;
}