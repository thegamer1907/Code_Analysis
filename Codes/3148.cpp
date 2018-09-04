#include <bits/stdc++.h>
using namespace std;

// RAM memory access ~ 8 Gigs
int n;
vector<long long> a; // long in java
long long rounds[100002];
long long mini = 100000000001;
int pos;

int main() {
    // you have stack memory which is limited to 64kB. --> stack overflow
    ios::sync_with_stdio(false);
    cin >> n;

    a.push_back(0);
    for(int i = 1; i <= n; ++i){
        long long x;
        cin >> x;
        a.push_back(x);
    }

    for(int i = 1; i <= n; ++i){
        long long sub = a[i] - i;
        rounds[i] = sub / n; // 4.6 --> 5 (now you have 4)
        if (rounds[i] < 0) rounds[i] = 0;

        if (i + rounds[i] * n <= a[i]) {
            ++rounds[i];
        }

    }
    for(int i = 1; i <= n; ++i){
        // cout << rounds[i] << endl;
    }
    // Select i with smallest i + rounds[i] * n
    for(int i = 1; i <= n; ++i){
        if(rounds[i]*n + i < mini){
            mini = rounds[i]*n + i;
            pos = i;
        }
    }

    cout << pos << endl;
    return 0;
}