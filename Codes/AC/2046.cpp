#include<bits/stdc++.h>
#define ll long long
#define ss string
#define pb push_back
#define rev(i,n) for(ll i=0;i<n;i++)
#define rev1(i,n) for(ll i=n-1;i>=0;i--)
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(),v.end()
#define S second
#define F first
#define tci(v,i) for(auto i=v.begin();i!=v.end();i++)
#define MOD 1000000007
#define  rep(i,start,lim) for(ll (i)=(start);i<(lim);i++)
using namespace std;
int32_t main()
{
        sync;
        map<ll,ll> m1,m2;
        ll n,k,x,s=0;cin>>n>>k;ll a[n];
        rev(i,n){cin>>a[i]; m1[a[i]]++;  }
        rev1(i,n)
        {
            m1[a[i]]--;
            if(a[i]%k==0)
            {
                s+=m1[a[i]/k]*m2[a[i]*k];
            }
            m2[a[i]]++;

        }
        cout<<s;
}

