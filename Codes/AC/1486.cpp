#include<bits/stdc++.h>
using namespace std;

/************************Start Of Template*************************/

/******** Mahin Shefat - GhOstMan *************/


#define     pb              push_back
#define     popb            pop_back
#define     ll              long long int
#define     ull             unsigned long long int
#define     max3(a,b,c)     max(a,max(b,c))
#define     max4(a,b,c,d)   max(max3,d)
#define     min3(a,b,c)     min(a,min(b,c))
#define     min4(a,b,c,d)   min(a,min3(b,c,d))
#define     MOD             1000000009
#define     f               first
#define     s               second
#define     mem(a,v)        memset(a,v,sizeof(a))
#define     mp              make_pair
#define     check           printf("check")
#define     sqr(x)          (x)*(x)
#define     all(v)          v.begin(),v.end()
#define     fast            ios_base::sync_with_stdio(0);cin.tie(0)
#define     pii             pair<int,int>
#define     Pair            pair<ll,ll>
#define     MAX             100000000000014
#define     MIN             -100000000000014


/************************End Of Template*************************/
ll A[100005];
int main()
{
    fast;
    ll N,S,ans=0,am=0;
    cin>>N>>S;

    for(int i=1;i<=N;i++) cin>>A[i];

    ll st=1,E=N;

    while(st <= E)
    {
        ll Mid=(st+E)/2;
        ll sum=0;
        vector<ll>v;
        for(int i=1;i<=N;i++)
        {
            ll a=(ll)i*Mid;
            ll val=A[i]+a;
            v.pb(val);
        }
        sort(all(v));
        for(int i=0,j=1;i<v.size() && j <= Mid;i++,j++)
        {
            sum+=v[i];
        }
        if(sum <= S)
        {
            ans=Mid,am=sum;
            st=Mid+1;
        }
        else E=Mid-1;
    }
    cout<<ans<<" "<<am<<endl;
    return 0;
}

