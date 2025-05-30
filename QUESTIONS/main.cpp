#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    /* -------------- ARRAYS ------------------*/
    vector<int, int> findSmallestLargestElement(int arr[], int n) {
        // find smallest and largest element from array
        int maxi = INT_MIN;
        int mini = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (arr[i] > maxi)
                maxi = arr[i];
            if (arr[i] < mini)
                mini = arr[i];
        }

        return {maxi, mini};
    }

    vector<int, int> findSecondSmallestSecondLargestElement(int arr[], int n) {
        // find second smallest and second largest element from array
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int smaxi = INT_MIN;
        int smini = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (arr[i] > maxi)
                maxi = arr[i];
            if (arr[i] < mini)
                mini = arr[i];
        }

        for (int i = 0; i < n; i++) {
            if (smaxi < arr[i] && maxi != arr[i]) smaxi = arr[i];
            if (smini > arr[i] && mini != arr[i]) smini = arr[i];
        }

        return {smaxi, smini};
    }

    void reverseArray(int arr[], int start, int end) {
        while (start <= end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    void countFrequency(int arr[], int n) {
        map<int, int> m;
        for (int i = 0; i < n; i++) {
            m[arr[i]]++;
        }

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " " << m[arr[i]] << endl;
        }
    }

    void rearrangeArray(int arr[], int n) {
        // Rearrange the array such that the first half is arranged in increasing order, and the second half is arranged in decreasing order

        sort(arr, arr + n);
        for (int i = 0; i < n / 2; i++) {
            cout << arr[i] << " ";
        }
        for (int i = n - 1; i >= n / 2; i--) {
            cout << arr[i] << " ";
        }
    }

    int sumOfElements(int arr[], int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }

        return sum;
    }

    void rotateArray(int arr[], int n, int k) {
        // Right Rotate
        k = k % n;
        reverseArray(arr, 0, n - 1);
        reverseArray(arr, 0, k - 1);
        reverseArray(arr, k, n - 1);
    }

    int averageOfAllElements(int arr[], int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }

        int avg = sum / n;

        return avg;
    }

    void getMedian(int arr[], int n) {
        sort(arr, arr + n);
        if (n % 2 == 0) {
            // for even
            int ind1 = (n / 2) - 1;
            int ind2 = (n / 2);
            cout << (double)(arr[ind1] + arr[ind2]) / 2;
        } else {
            // for odd
            cout << arr[(n / 2)];
        }
    }

    int removeDuplicatesSortedArray(int arr[], int n) {
        int i = 0;
        for (int j = 1; j < n; j++) {
            if (arr[i] != arr[j]) {
                i++;
                arr[i] = arr[j];
            }
        }
        return i + 1;
    }

    void insertatbegin(int* arr, int n, int value) {
        for (int i = n - 1; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
        arr[0] = value;
    }

    void insertatEnd(int* arr, int n, int value) {
        arr[n] = value;
    }

    void findRepeatingElements(vector<int>& arr) {
        unordered_map<int, int> m;
        int n = arr.size();

        for (auto it : arr) {
            m[it]++;
        }

        for (auto it : m) {
            if (it.second > 1) cout << it.first << " ";
        }
    }

    /*----------NUMBERS---------------------*/

    bool isPalindrome(int n) {
        int temp = n;
        int rev = 0;

        while (n != 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }

        if (rev == temp)
            cout << "Palindrome Number\n";
        else
            cout << "NOT Palindrome Number\n";
    }

    
};