#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {
public:
    vector<int> v;

    bool empty() {
        return this->v.size() == 0;
    }

    void push(int el) {
        v.push_back(el);
        upHeapify(v.size() - 1);
    }

    // Remove highest priority element
    void pop() {
        if (empty()) return;
        swap(v[0], v[v.size() - 1]);
        v.pop_back();
        downHeapify(0, v.size());
    }

    void display() {
        cout << "[";
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << "]";
    }

    // Heapify
    void upHeapify(int ci) {
        while (ci > 0) {
            int pi = (ci - 1) / 2;
            if (v[ci] > v[pi]) {
                swap(v[ci], v[pi]);
                ci = pi;
            } else {
                break;
            }
        }
    }

    void downHeapify(int idx, int bound) {
        while (idx < bound) {
            int lc = 2 * idx + 1;
            int rc = 2 * idx + 2;
            int max = idx;

            if (lc < bound && v[max] < v[lc]) {
                max = lc;
            }
            if (rc < bound && v[max] < v[rc]) {
                max = rc;
            }
            if (max != idx) {
                swap(v[max], v[idx]);
                idx = max;
            } else {
                break;
            }
        }
    }


    

    MaxHeap(vector<int> v1) {
        v = v1;
        int n = v.size();
        for (int j = n / 2 - 1; j >= 0; j--) {
            downHeapify(j, n);
        }
    }

    void heapSort() {
        int n = v.size();
        for (int i = n - 1; i > 0; i--) {
            swap(v[0], v[i]);
            downHeapify(0, i);
        }
    }
};

int main() {
    vector<int> v1 = {9, 6, 1, 19, 3, 2, 8, 12, 5};
    MaxHeap hp(v1);
    hp.heapSort();
    hp.display();
    return 0;
}
