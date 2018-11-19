#include <bits/stdc++.h>
using namespace std;
const int N = 5;
const int NN = 2e5 + 1;
int n,k;
int a[NN],kt[1 << N];
void nhap()
{
    scanf("%d %d",&n,&k);
    for (int i=1; i<=n; i++)
    {
        int gt = 0;
        for (int j = 0; j < k; j++)
        {
            int x;
            scanf("%d",&x);
            if (x == 1) {gt = gt * 2 + 1;}
            else {gt = gt * 2;}
        }
        //cout<<gt<<endl;
        a[i] = gt;
    }
}
void solve()
{
    for (int i=1; i<=n; i++)
    {
        if (a[i] == 0) {cout<<"YES"; return;}
        if (i == 1) {kt[a[i]] = 1; continue;}
        for (int j = 1; j < 1 << k; j++)
        {
            if (kt[j] == 1 && (a[i] & j) == 0) {cout<<"YES"; return;}
        }
        kt[a[i]] = 1;
    }
    cout<<"NO";
}
int main()
{
    nhap();
    solve();
}
