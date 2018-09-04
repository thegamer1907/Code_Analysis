#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long double ld;
typedef long long ll;
typedef pair<ll,ll> pi;
typedef vector<ll> vi;


const int MAXN = 1e5 + 1;

int n,k,numa[MAXN];
string s;

int main()
{
    scanf("%d%d",&n,&k); cin >> s;
    for(int i=0;i<n;++i) numa[i] = i ? numa[i-1] + (s[i]=='a') : (s[i]=='a');
    int l = 1, r = n, mid,ans=0;
    while(l<=r)
    {
        mid = (l+r)/2;
        int ok = 0,a,b;
        for(int i=0;i<=n-mid;++i)
        {
            a = i ? numa[i+mid-1] - numa[i-1] : numa[i+mid-1]; b = mid - a;
            if(a<=k || b<=k) {ans = max(ans,mid),ok = 1;break;}
        }
        if(ok) l = mid + 1;
        else r = mid - 1;
    }
    printf("%d",ans);
}





