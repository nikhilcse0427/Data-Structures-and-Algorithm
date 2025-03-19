#include<iostream>
using namespace std;

int partition(int arr[], int startIdx, int endIdx) {
    int pivotEle = arr[startIdx], count = 0, pivotIdx = startIdx;

    for (int i = startIdx + 1; i <= endIdx; i++) {
        if (pivotEle > arr[i]) {
            count++;
            pivotIdx = count + startIdx;  
            swap(arr[pivotIdx], arr[i]);
        }
    }

    int i = startIdx;
    int j = endIdx;
    while (i < pivotIdx && j > pivotIdx) {
        if (arr[i] < pivotEle) {
            i++;
        } else if (arr[j] > pivotEle) {
            j--;
        } else if (arr[i] > pivotEle && arr[j] < pivotEle) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}

void quickSort(int arr[], int startIdx, int endIdx) {
    if (startIdx >= endIdx) return;
    int pivotIdx = partition(arr, startIdx, endIdx);
    quickSort(arr, startIdx, pivotIdx - 1);
    quickSort(arr, pivotIdx + 1, endIdx);
}

int main() {
    int arr[] = {7, 2, 5, 6, 10, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Sorted array" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
