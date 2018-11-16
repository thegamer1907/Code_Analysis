#include <stdio.h>
#include <bits/stdc++.h>

#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)

#define file "tree"

using namespace std;
using ll = long long;
using ull = unsigned long long;
using str = string;
using srt = short;

const int INF = 1e9 + 4;
const int mod = 7 + 1e9;
const int N = 2000000 + 5;

int main()
{
    ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    sort(rall(arr));
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] >= arr[k - 1] && arr[i] > 0)
            ++ans;
        else
            break;
    }
    cout << ans;
}