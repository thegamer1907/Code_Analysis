#include <bits/stdc++.h>
using namespace std;

#define MAX 200000

int a[MAX];

map<int, int> countLeft, countRight;

int main()
{
    // freopen("input.in", "r", stdin);
    int n, k;
    cin >> n >> k;
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<n-2; i++)
        countLeft[a[i]] += 1;
    countRight[a[n-1]] = 1;
    long long ans = 0;
    for(int i=n-2; i>=1; i--)
    {
        int x = a[i];
        int leftVal = x%k==0 ? x / k : -1;
        int rightVal = x*1LL*k <= 1000000000 and x*1LL*k >= -1000000000 ? x*k : -1; 
        ans += countLeft[leftVal] * 1LL * countRight[rightVal];
        countLeft[a[i-1]] -= 1;
        countRight[a[i]] += 1;
    }
    cout << ans;
}