#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int n, k, cur, ar[N];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    
    cur = k - 1;
    while (cur < n - 1 && ar[cur] == ar[cur + 1])
        cur++;
    
    while (cur >= 0 && !ar[cur])
        cur--;
    cout << cur + 1;
}