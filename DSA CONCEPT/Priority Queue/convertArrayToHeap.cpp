#include <iostream>
using namespace std;
#include <vector>

class MaxHeap{
  public:
  vector<int> v;
  int i;


  bool empty(){
    return this->v.size()==0;
  }

  void push(int el){
    v.push_back(el);
    upHeapify(v.size()-1);
  }
  //remove highest priority element
  void pop(){
    if(empty()) return;
    swap(v[0],v[v.size()-1]);
    v.pop_back();
    downHeapify(0);
  }

  void display(){
    cout<<"[";
    for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
    }
    cout<<"]";
  }





  //heapify
  void upHeapify(int ci){
    while(ci>0){
    int pi = (ci-1)/2;
    if(v[ci]>v[pi]){
      swap(v[ci],v[pi]);
      ci=pi;
      }
      else{
        break;
      }
    }
  }

  void downHeapify(int idx){
    while(idx < v.size()-1){
      int lc=2*idx+1;
      int rc=2*idx+2;
      if(lc > v.size()-1) break;
      int max = idx;
      if(lc < v.size()  && v[max] < v[lc]){
        max=lc;
      }
      else if(rc < v.size()  && v[max] < v[rc]){
        max=rc;
      }
      else if(max != idx){
        swap(v[max],v[idx]);
      }
      else{
        break;
      }

    }
  }
  // MaxHeap(vector<int> v1){
  //   /*
  //   Time complexity: O(nlog(n))
  //   */
  //   v = v1;
  //   for(int i=0;i<v.size();i++){
  //     upHeapify(i);
  //   }
  // }

  MaxHeap(vector<int> v1){
    /*
    Time complexity: O(n)
    */
    v = v1;
    for(int i=v.size()/2;i>0;i--){
      downHeapify(i);
    }
  }

};
int main(){
  vector<int> v1 = {9,6,1,19,3,2,8,12,5};
  MaxHeap hp(v1);
  hp.display();
    return 0;
}