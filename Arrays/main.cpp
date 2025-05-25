#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    void reverseArray(vector<int> arr, int s, int e) {
        while (s <= e) {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }

    int largestElement(int arr[], int n) {
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (arr[i] > maxi) {
                maxi = arr[i];
            }
        }

        return maxi;
    }

    int secondLargestElement(int arr[], int n) {
        int maxi = INT_MIN;
        int smaxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (arr[i] > maxi) {
                maxi = arr[i];
            }
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] != maxi && smaxi < arr[i]) {
                smaxi = arr[i];
            }
        }

        return smaxi;
    }
};