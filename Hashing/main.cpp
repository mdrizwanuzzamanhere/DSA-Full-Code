#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    int countFrequency(int arr[], int n, int k) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == k) {
                cnt++;
            }
        }

        return cnt;
    }

    void Frequency(int arr[], int n) {
        unordered_map<int, int> map;

        for (int i = 0; i < n; i++)
            map[arr[i]]++;

        int maxFreq = 0, minFreq = n;
        int maxEle = 0, minEle = 0;
        // Traverse through map to find the elements.
        for (auto it : map) {
            int count = it.second;
            int element = it.first;

            if (count > maxFreq) {
                maxEle = element;
                maxFreq = count;
            }
            if (count < minFreq) {
                minEle = element;
                minFreq = count;
            }
        }

        cout << "The highest frequency element is: " << maxEle << "\n";
        cout << "The lowest frequency element is: " << minEle << "\n";
    }
};