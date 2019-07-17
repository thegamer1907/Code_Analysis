#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define S second
#define F first
#define ii pair <int,int>
#define IOS std::ios_base::sync_with_stdio(false)
#define pb push_back
#define inf INT_MAX

const int N = 1e5 + 10;
ll n,m,k,a[N];
int main()
{
    IOS;
    cin>>n>>m>>k;
    for(int i = 0 ; i < m ;i++)
        cin>>a[i];
    sort(a,a+m);
    ll d=0 , ans=0;
    for(int i = 0 ; i < m ;)
    {
        ll t = (a[i] - d);
        ans++;
        if(t%k == 0)
        {
            d++;
            i++;
            continue;
        }
        ll tt = k - (t%k),j;
        for(j = i+1 ; j < m ; j++)
        {
            if((a[j] -d) - t > tt) break;
        }
        d += j - i;
        i = j;
    }
    cout<<ans;
}