#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    void print(int n) {
        if (n == 0) return;
        cout << "Rizwan" << endl;
        print(n - 1);
    }

    int sum(int n) {
        if (n == 0) return 0;
        return n + sum(n - 1);
    }

    int factorial(int n) {
        if (n == 0) return 1;
        return n * factorial(n - 1);
    }

    void reverseArray(int arr[], int start, int end) {
        if (start >= end) return;
        swap(arr[start], arr[end]);

        reverseArray(arr, start + 1, end - 1);
    }

    bool isPalindrome(int arr[], int start, int end) {
        if (start >= end) return true;
        if (arr[start] != arr[end]) return false;
        return isPalindrome(arr, start + 1, end - 1);
    }
    
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        return fib(n - 1) + fib(n - 2);
    }
};