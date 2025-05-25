#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int iterativeBinarySearch(vector<int> arr, int target) {
        int low = 0;
        int high = arr.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == target)
                return mid;
            else if (arr[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return -1;
    }

    int recursiveBS(int arr[], int low, int high, int target) {
        if (low > high) return -1;
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        else if (target > arr[mid])
            return recursiveBS(arr, mid + 1, high, target);

        return recursiveBS(arr, low, mid - 1, target);
    }
};