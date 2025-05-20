#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int countDigits(int n) {
        int cnt = 0;

        while (n != 0) {
            int digit = n % 10;
            cnt++;
            n = n / 10;
        }

        return cnt;
    }

    int reverseNumber(int n) {
        int rev = 0;

        while (n != 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;

            n = n / 10;
        }

        return rev;
    }

    int isPalindrome(int n) {
        int rev = 0;
        int temp = rev;
        while (n != 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }

        if (rev == temp)
            return 1;
        else
            return 0;
    }

    int gcd(int a, int b) {
        int ans;
        for (int i = 1; i <= a && i <= b; i++) {
            if (a % i == 0 && b % i == 0) {
                ans = i;
            }
        }

        return ans;
    }

    vector<int> printDivisors(int n) {
        vector<int> ans;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                ans.push_back(i);
                if (i != n / i) {
                    ans.push_back(n / i);
                }
            }
        }

        return ans;
    }

    bool checkForPrime(int n) {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }

        return true;
    }
};