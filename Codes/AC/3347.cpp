#include<bits/stdc++.h>
#define fi first
#define sf scanf
#define se second
#define pf printf
#define pb push_back
#define mp make_pair
#define sz(x) ((int)(x).size())
#define mem(x,y) memset((x),(y),sizeof(x))
#define fo(i,x,y,z) for(int i=(x);i y;i z)
#define fup(i,x,y) for(int i=(x);i<=(y);i++)
#define fdn(i,x,y) for(int i=(x);i>=(y);i--)
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef std::pair<int,int> pii;
using namespace std;

const int __=1e5+5;
int a[__];

int main()
{
    int n;sf("%d",&n);
    fup(i,0,n-1)sf("%d",&a[i]);
    int ans;ll sum=LONG_LONG_MAX;
    fup(i,0,n-1)
    {
        int k=(a[i]-i+n-1)/n;
        ll step=i+1ll*k*n;
        //pf("%d:%lld\n",i,step);
        if(step<sum)
            ans=i+1,sum=step;
    }
    pf("%d\n",ans);
    return 0;
}
