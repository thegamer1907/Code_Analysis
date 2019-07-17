#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
LL p[100005];
int main (void)
{
    LL n,m,k;
    cin>>n>>m>>k;
    for(int i = 0;i < m;i++) {
        cin>>p[i];
    }
    LL cn = k;
    int cnt = 0;
    int t = 0;
    int ans = 0;
    while(t < m) {
            bool flag = false;
            int us = 0;
        while(p[t] - cnt <= k && t < m) {
            t++;
            flag = true;
            us++;
        }
        cnt += us;
        if(!flag) {
            k = k + cn;
            //cout<<k<<endl;
        } else {
            ans++;
        }
    }
    cout << ans <<endl;
    return 0;
}