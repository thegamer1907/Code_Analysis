#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
#define ll long long
#define mod 1000000007
#define bitcount    __builtin_popcountll
#define pb push_back
map<int,int> m;
int a[500005];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,i,s,x,ans=0;
    sd(n);
    map<int,int>::iterator it;
    for(i=0;i<n;i++)
    {
        sd(a[i]);
        m[a[i]]++;
    }
    sort(a,a+n);
    for(i=(n-1)/2;i>=0;i--)
    {
        it=m.lower_bound(2*a[i]);
        if(it!=m.end())
        {
            ans++;
            it->second--;
            m[a[i]]--;
            if(m[a[i]]==0)
                m.erase(a[i]);
            if(it->second==0)
                m.erase(it->first);
        }
    }
    cout<<n-ans<<endl;
    return 0;
}
