#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double 
#define endl "\n"
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define SZ(a) (int)(a.size())
#define fr(i,n) for(i=1;i<=n;i++)

typedef pair<int, int> II;
typedef vector< II > VII;
typedef vector<int> VI;

ll a[110];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll i,n,j,k,mx=0,cnt;
    cin>>n;
    fr(i,n) cin>>a[i];
    fr(i,n) for(j=i;j<=n;j++)
    {
        cnt=0;
        for(k=1;k<i;k++)
            cnt+=a[k];
        for(;k<=j;k++)
            cnt+=(1-a[k]);
        for(;k<=n;k++)
            cnt+=a[k];
        mx=max(mx,cnt);
    }
    cout<<mx<<endl;
    return 0;
}
