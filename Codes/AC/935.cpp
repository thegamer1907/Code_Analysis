#include <bits/stdc++.h>
#define ill int long long
#define fi first
#define se second
#define pb push_back
#define ld long double
#define pp push_front
#define mp make_pair
using namespace std;
ill n,k,mx,i,l,r,m,a[100005],b[100005],x;
string s;
vector <int> v[2];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    cin>>n>>k;
    cin>>s;
    for (i=0;i<n;i++)
    {
        a[i+1]=a[i]+(s[i]=='a');
        b[i+1]=b[i]+(s[i]=='b');
    }
    for (i=1;i<=n;i++)
    {
        x=i-1;
        l=i;r=n;
        while (l+1<r)
        {
            m=(l+r)/2;
            if (a[m]-a[x]<=k)l=m;
            else r=m;
        }
        if (a[r]-a[x]<=k)l=r;
        if (a[l]-a[x]<=k)mx=max(l-x,mx);
        l=i;r=n;
        while (l+1<r)
        {
            m=(l+r)/2;
            if (b[m]-b[x]<=k)l=m;
            else r=m;
        }
        if (b[r]-b[x]<=k)l=r;
        if (b[l]-b[x]<=k)mx=max(l-x,mx);
    }
    cout<<mx;
}
