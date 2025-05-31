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
            if (smaxi < arr[i] && maxi != arr[i])
                smaxi = arr[i];
            if (smini > arr[i] && mini != arr[i])
                smini = arr[i];
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

    void insertatbegin(int *arr, int n, int value) {
        for (int i = n - 1; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
        arr[0] = value;
    }

    void insertatEnd(int *arr, int n, int value) {
        arr[n] = value;
    }

    void findRepeatingElements(vector<int> &arr) {
        unordered_map<int, int> m;
        int n = arr.size();

        for (auto it : arr) {
            m[it]++;
        }

        for (auto it : m) {
            if (it.second > 1)
                cout << it.first << " ";
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

    bool isPrime(int n) {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }

        return true;
    }

    bool isArmstrong(int n) {
        int temp = n;
        int sum = 0;

        while (n != 0) {
            int digit = n % 10;
            sum += digit * digit * digit;
            n = n / 10;
        }

        if (temp == sum) {
            return true;
        }

        else {
            return false;
        }
    }

    bool isPerfect(int n) {
        // perfect number is defined as a number that is the sum of its proper divisors ( all its positive divisors excluding itself).
        int sum = 0;
        for (int i = 1; i <= n - 1; i++) {
            if (n % i == 0)
                sum = sum + i;
        }
        if (sum == n)
            return true;
        else
            return false;
    }

    bool isEvenOdd(int n) {
        // if ((n & 1) == 0)
        //     return 0;
        // else
        //     return 1;

        return (n % 2);
    }

    bool checkPositiveNegative(int n) {
        if (n > 0) {
            cout << n << " is positive." << endl;
        } else {
            cout << n << " is negative." << endl;
        }

        // if (n >> 31 == 0) {
        //     cout << n << " is positive." << endl;
        // } else {
        //     cout << n << " is negative." << endl;
        // }
    }

    bool sumOfNaturalNumbers(int n) {
        int sum = (n * n + n) / 2;
        return sum;
    }

    float sumofAp(float a, float d, int n) {
        float sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += a;
            a += d;
        }
        return sum;
    }

    float SumofGP(float a, float r, int n) {
        float sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + a;
            a = a * r;
        }
        return sum;
    }

    int findGreatestOfTwoNumbers(int a, int b) {
        if (a < b)
            return b;
        else
            return a;
    }

    int findGreatestOfThreeNumbers(int a, int b, int c) {
        if (a > b && a > c) {
            cout << "a is greatest";
        }

        else if (b > a && b > c) {
            cout << "b is greatest";
        }

        else {
            cout << "c is greatest";
        }
    }

    bool isLeapYear(int n) {
        if (n % 400 == 0 && n % 100 == 0)
            return true;
        else if (n % 4 == 0 && n % 100 != 0)
            return true;
        else
            return false;
    }

    int reverseNummber(int n) {
        int rev = 0;
        while (n != 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }
        return rev;
    }

    void fibonacci(int n) {
        // Print Fibonacci Series upto nth term
        if (n == 0) {
            cout << "Fibonacci series upto nth term: " << 0 << endl;
        }

        else {
            int first = 0;
            int second = 1;
            int curr;

            cout << "Fibonacci Series upto nth term: " << endl;

            for (int i = 2; i <= n; i++) {
                curr = first + second;
                first = second;
                second = curr;
                cout << curr << " ";
            }
        }
    }

    int factorial(int n) {
        int f = 1;
        for (int i = 1; i <= n; i++) {
            f = f * i;
        }

        return f;
    }

    int power(int a, int b) {
        int ans = 1;
        for (int i = 0; i < b; i++) {
            ans = ans * a;
        }

        return ans;
    }

    vector<int> printFactors(int n) {
        vector<int> ans;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                ans.push_back(i);
            }
        }

        return ans;
    }

    vector<int> printPrimeFactors(int n) {
        vector<int> ans;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                bool flag = isPrime(i);
                if (flag == true) ans.push_back(i);
            }
        }
    }

    bool isStrongNumber(int num) {
        // When the sum of factorial of individual digits of a number is equal to the original number the number is called a strong number / Krishnamurthy Number / Peterson Number. eg. 145

        int sum = 0;
        // Extract all the digits from num
        while (num > 0) {
            int digit = num % 10;
            sum = sum + factorial(digit);
            num = num / 10;
        }
        return sum;
    }

    pair<int, int> gcd_lcm(int a, int b) {
        int gcd, lcm;
        for (int i = 1; i <= a && i <= b; i++) {
            if (a % i == 0 && b % i == 0) {
                gcd = i;
            }
        }

        lcm = (a * b) / gcd;

        return {gcd, lcm};
    }

    double areaOfCircle(int r) {
        return 3.14 * r * r;
    }

    int binaryToDecimal(string s) {
        int len = s.length();
        int p = 1, num = 0;
        for (int i = len - 1; i >= 0; i--) {
            if (s[i] == '1') num += p;
            p *= 2;
        }

        return num;
    }

    void reverse(string str, int s, int e) {
        while (s <= e) {
            swap(str[s], str[e]);
            s++;
            s--;
        }
    }

    string decimalToBinary(int n) {
        string res = "";
        while (n != 1) {
            if (n % 2 == 1)
                res += '1';
            else
                res += '0';

            n = n / 2;
        }

        reverse(res, 0, res.length() - 1);
        return res;
    }

    bool isPalindromeString(string str, int start, int end) {
        if (start >= end) return true;
        if (str[start] != str[end]) return false;

        return isPalindromeString(str, start + 1, end - 1);
    }

    void countVowelConsonantWhitespace(string str, int length) {
        int vowels = 0, consonants = 0, whitespaces = 0;
        for (int i = 0; i < length; i++)  // converting given string to lowercase
        {
            str[i] = tolower(str[i]);
        }
        for (int i = 0; i < length; i++) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                vowels++;
            else if (str[i] >= 'a' && str[i] <= 'z')
                consonants++;
            else if (str[i] == ' ')
                whitespaces++;
        }

        cout << "Vowels: " << vowels << "\n";
        cout << "Consonants: " << consonants << "\n";
        cout << "White Spaces: " << whitespaces << "\n";
    }
};