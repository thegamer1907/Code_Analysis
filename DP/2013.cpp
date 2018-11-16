#include<bits/stdc++.h>
using namespace std;
int cnt[100007];
int Mp[100007];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , m ;
    cin >> n >> m ;
    int ar[n+7] ;
    for(int i=1;i<=n;i++)
        cin >> ar[i];
    for(int i=n;i>0;i--)
    {
        int val  = ar[i];
        //cin >> val ;
        if(Mp[val]==0)
        {
            Mp[val] = 1;
            cnt[i]++;
        }
        cnt[i] += cnt[i+1];
    }
    for(int i=1;i<=m;i++)
    {
        int l,r;
        cin >> l;
        cout<<cnt[l]<<'\n';
    }
    return 0;
}
