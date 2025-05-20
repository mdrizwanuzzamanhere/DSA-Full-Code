#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    void star1(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }

            cout << endl;
        }
    }

    void star2(int n) {
        for (int i = n - 1; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }

            cout << endl;
        }
    }

    void star3(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = i; j < n; j++) {
                cout << " ";
            }

            for (int j = 1; j <= i; j++) {
                cout << "*";
            }

            cout << endl;
        }
    }

    void num1(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << i;
            }

            cout << endl;
        }
    }

    void num2(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << j;
            }

            cout << endl;
        }
    }

    void floyd_triangle(int n) {
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << cnt;
                cnt++;
            }
        }
    }

    void rectangle(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << "*";
            }

            cout << endl;
        }
    }

    void hollow_rectangle(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << "*";
            }

            cout << endl;
        }
    } 

    void pyramid(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = i; j < n; j++) {
                cout << " ";
            }

            for (int j = 1; j <= 2 * i - 1; j++) {
                cout << "*";
            }

            cout << endl;
        }
    }

    void binary_pattern(int n) {
        int start = 1;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                start = 1;  // even
            else
                start = 0; // odd

            for (int j = 0; j < i; j++) {
                cout << start;
                start = 1 - start;
            }

            cout << endl;
        }
    }
};