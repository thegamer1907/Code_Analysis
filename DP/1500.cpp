#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int dp[100], v[100];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        dp[i] = (i ? dp[i - 1] : 0) + v[i];
    }
    int m = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            int start = (i ? dp[i - 1] : 0);
            int mid = (j - i + 1) - (dp[j] - (i ? dp[i - 1] : 0));
            int end = (dp[n - 1] - dp[j]);
            m = max(m, start + mid + end);
        }
    }
    cout << m << endl;
}