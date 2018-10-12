#include<bits/stdc++.h>
#define ll long long
#define ios ios_base::sync_with_stdio(false)

using namespace std;

const ll INF=(1ll<<62)-1;
const int M=2e5+5;

ll a[M],k[M],cnt,sum;
ll s[M];
vector<ll>v;

    int main()
    {
        ios;
        int n,q;
        cin>>n>>q;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            s[i]=s[i-1]+a[i];
        }

    for(int i=1;i<=q;i++)
    {
        cin>>k[i];
        sum+=k[i];
        int idx=upper_bound(s,s+n+1,sum)-s-1;
        if(idx==n)
        {
            cout<<n<<endl;
            sum=0;
        }
        else cout<<n-idx<<endl;
    }
    }
