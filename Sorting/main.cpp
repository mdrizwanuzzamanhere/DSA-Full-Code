#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    void selectionSort(vector<int>& arr) {
        int n = arr.size();

        for (int i = 0; i < n - 1; ++i) {
            int min_idx = i;

            for (int j = i + 1; j < n; ++j) {
                if (arr[j] < arr[min_idx]) {
                    min_idx = j;
                }
            }

            swap(arr[i], arr[min_idx]);
        }
    }

    void bubbleSort(vector<int>& v) {
        int n = v.size();

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (v[j] > v[j + 1])
                    swap(v[j], v[j + 1]);
            }
        }
    }

    void insertionSort(int arr[], int n) {
        for (int i = 1; i < n; ++i) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }

    void merge(int arr[], int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid + 1;
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            }

            else {
                temp.push_back(arr[right]);
                right++;
            }
        }

        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }

        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
    }

    void mergeSort(int arr[], int low, int high) {
        if (low >= high) return;
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
};