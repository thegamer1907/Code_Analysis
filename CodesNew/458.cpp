#include <bits/stdc++.h>

// Code by 0blivium //

using namespace std;

int main()
{
    int n,t; cin >> n >> t;
    int books[n+5];

    for (int i = 0; i < n; i++) {
        cin >> books[i];
    }

    // 2 pointers method, O(n) //
    int l = 0, current = 0, sum = 0, outcome = 0;
    for (int i = 0; i < n; i++) {
        sum += books[i];
        current++;

        while (sum > t) {
            current--;
            sum -= books[l];
            l++;
        }

        outcome = max(outcome, current);
    }

    cout << outcome << endl;

    return 0;
}

