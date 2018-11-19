/* ***************************************
Author        :Scau.ion
Created Time  :2017/10/05 15:42:16 UTC+8
File Name     :ion.cpp
*************************************** */

#include <bits/stdc++.h>
using namespace std;

#define LL long long
#define ULL unsigned long long
#define PB push_back
#define MP make_pair
#define PII pair<int,int>
#define VI vector<int>
#define VPII vector<PII>
#define X first
#define Y second
#define IOS ios::sync_with_stdio(0);cin.tie(0);
#define IN freopen("in", "r", stdin);
#define OUT freopen("out", "w", stdout);

int n, k;
int a[5];
bool dp[100];

bool dfs(int st, int x)
{
    if (st > k)
    {
        return dp[x];
    }
    x *= 2;
    if (dfs(st + 1, x)) return 1;
    if (a[st] == 0) return dfs(st + 1, x + 1);
    return 0;
}

int main()
{
    IOS;
    cin>>n>>k;
    for (int j = 1; j <= n; ++ j)
    {
        bool flag = 1;
        for (int l = 1; l <= k; ++ l)
        {
            cin>>a[l];
            if (a[l]) flag = 0;
        }
        if (flag)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if (dfs(1, 0))
        {
            cout<<"YES"<<endl;
            return 0;
        }
        int val = 0;
        for (int l = 1; l <= k; ++ l)
        {
            val *= 2;
            val += a[l];
        }
        dp[val] = 1;
    }
    cout<<"NO"<<endl;
    return 0;
}
