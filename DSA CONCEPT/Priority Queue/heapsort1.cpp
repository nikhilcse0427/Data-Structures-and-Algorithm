#include<iostream>
#include<vector>
using namespace std;

class Heap {
public:
    void display(const vector<int>& v1) {
        cout << "[";
        for (int i = 0; i < v1.size(); i++) {
            cout << v1[i] << " ";
        }
        cout << "]";
    }

    void heapSort(vector<int>& v1) {
        int n = v1.size();
        // Build the heap
        for (int i = n / 2 - 1; i >= 0; i--) {
            downHeapify(i, n, v1);
        }
        // Extract elements from heap one by one
        for (int j = n - 1; j > 0; j--) {
            swap(v1[0], v1[j]);
            downHeapify(0, j, v1);
        }
    }

    void downHeapify(int idx, int bound, vector<int>& v1) {
        while (idx < bound) {
            int lc = 2 * idx + 1;
            int rc = 2 * idx + 2;
            int max = idx;

            if (lc < bound && v1[max] < v1[lc]) {
                max = lc;
            }
            if (rc < bound && v1[max] < v1[rc]) {
                max = rc;
            }
            if (max != idx) {
                swap(v1[max], v1[idx]);
                idx = max;
            } else {
                break;
            }
        }
    }
};

int main() {
    vector<int> v = {5, 7, 4, 2, 9, 8, 18, 19};
    Heap hp;
    hp.display(v);
    cout << endl;
    hp.heapSort(v);
    hp.display(v);
    return 0;
}
