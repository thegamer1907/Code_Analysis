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
ll n,st,en,mid,s,c[N],t,cnt[N],x[N];

int main()
{
//    freopen(".txt","r",stdin);
    cin>>n>>s;
    en=n;
    for(int i=0;i<n;i++)scanf("%I64d",c+i);
    while(st<en){
        t=0;
        mid=(st+en+1)>>1;
        for(int i=0;i<n;i++)x[i]=c[i]+mid*(i+1);
        sort(x,x+n);
        for(int i=0;i<mid;i++)t+=x[i];
        if(t<=s)st=mid;
        else en=mid-1;
        cnt[mid]=t;
    }

    cout<<st<<' '<<cnt[st];
    return 0;
}
