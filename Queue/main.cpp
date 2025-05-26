// Queue STL

#include <bits/stdc++.h>

// #include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(11);
    int front = q.front();
    q.push(15);
    front = q.front();
    q.size();
    q.pop();
    cout << "Size of Queue" << q.size();

    if (q.empty())
        cout << "Queue is Empty";
    else
        cout << "NOT Empty Queue";

    return 0;
}
