#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
LL p[100005];
int main (void)
{
    LL n,m,k;
    cin>>n>>m>>k;
    for(int i = 0; i < m; i++)
    {
        cin>>p[i];
    }
    LL cn = k;
    int cnt = 1;
    int t = 0;
    int ans = 0;
    while(t < m)
    {
        bool flag = false;
        int us = 1;
        int ut = t + 1;
        while((p[t] - cnt)/k == (p[ut] - cnt)/k && t + 1 < m)
        {
            ut++;
            us++;
        }
        cnt += us;
        t = ut;
        ans++;
    }
    cout << ans <<endl;
    return 0;
}