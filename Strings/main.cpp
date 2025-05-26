#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    bool isPalindrome(char str[]) {
        int n = strlen(str);
        for (int i = 0; i < n / 2; i++) {
            if (str[i] != str[n - 1]) {
                return false;
            }
        }
    }

    void reverseString(char str[]) {
        int n = strlen(str);
        for (int i = 0; i < n / 2; i++) {
            swap(str[i], str[n - i - 1]);
        }
    }

    void duplicateCharactersInString(string str) {
        unordered_map<char, int> m;
        for (int i = 0; i < str.size(); i++) {
            m[str[i]]++;
        }

        for (auto it : m) {
            if (it.second > 1) {
                cout << it.first << " " << it.second;
            }
        }
    }

    bool isAnagram(string a, string b) {
        if (a.length() != b.length()) return false;
        unordered_map<char, int> m;
        for (int i = 0; i < a.size(); i++) {
            m[a[i]]++;
        }

        for (int i = 0; i < b.size(); i++) {
            if (m.find(b[i]) != m.end())
                m[b[i]]--;
            else
                return false;
        }

        for (auto it : m) {
            if (it.second != 0)
                return false;
        }

        return true;
    }
};