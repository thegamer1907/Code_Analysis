#include <bits/stdc++.h>

using namespace std;

class cmp {
public: bool operator()(int a, int b)
{
    return a > b;
}
};

int solve(pair<long long, int> *a, int n, int k, int s)
{
    long long *arr = new long long[n];
    for (int i = 0; i < n; i++) {
        arr[i] = a[i].first + a[i].second * (long long)k;
    }
    make_heap(arr, arr + n, cmp());
    int temp = s;
    for (int i = 0; i < k; i++) {
        pop_heap(arr, arr + n - i, cmp());
        if (arr[n - i - 1] > temp)return -1;
        temp -= arr[n - i - 1];
    }
    delete arr;
    return s - temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n, s;
    cin >> n >> s;
    auto *a = new pair<long long, int>[n];
    for (int i = 0; i < n ; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    int lo = 1, hi = n;
    while (lo < hi) {
        int mid = (lo + hi) / 2 + (lo + hi) % 2;
        if (solve(a, n, mid, s) != -1)lo = mid;
        else hi = mid - 1;
    }
    int temp = solve(a, n, lo, s);
    if (temp == -1)cout << "0 0";
    else cout << lo << " " << temp;
    return 0;
}
