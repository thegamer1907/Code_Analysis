#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
#define ff first
#define ss second

using namespace std;

const double pi=acos(-1);
const int N=(int)1e6+7,mod=1000000007,M=2e9;

//scanf("%d",&);
ll n,st,en,mid,s,c[N],t,cnt[N];

int main()
{
//    freopen(".txt","r",stdin);
    cin>>n>>s;
    en=n;
    for(int i=0;i<n;i++)cin>>c[i];
    while(st<en){
        t=0;
        mid=(st+en+1)>>1;
        vector<ll> x;
        for(int i=0;i<n;i++)x.pb(c[i]+mid*(i+1));
        sort(x.begin(),x.end());
        for(int i=0;i<mid;i++)t+=x[i];
        if(t<=s)st=mid;
        else en=mid-1;
        cnt[mid]=t;
    }

    cout<<st<<' '<<cnt[st];
    return 0;
}
