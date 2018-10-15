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

ll a[500010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll i,j,n,l,r,m;
    cin>>n;
    fr(i,n) cin>>a[i];
    sort(a+1, a+n+1);
    l=(n+1)/2, r=n;
    while(l<=r)
    {
        m=(l+r)>>1;
        for(i=1, j=m+1;j<=n;i++, j++)
            if(2*a[i]>a[j])
                break;
        if(j<=n)
            l=m+1;
        else
            r=m-1;
    }
    cout<<l<<endl;
    return 0;
}
