#include<bits/stdc++.h>
#define db double
#define ll long long
#define vec vector<ll>
#define Mt  vector<vec>
#define ci(x) scanf("%d",&x)
#define cd(x) scanf("%lf",&x)
#define cl(x) scanf("%lld",&x)
#define pi(x) printf("%d\n",x)
#define pd(x) printf("%f\n",x)
#define pl(x) printf("%lld\n",x)
#define rep(i, x, y) for(int i=x;i<=y;i++)
const int N   = 1e6 + 5;
const int mod = 1e9 + 7;
const int MOD = mod - 1;
const db  eps = 1e-18;
const db  PI  = acos(-1.0);
using namespace std;

int n,k;
int ans=0;
int s[20];
bool v[20];
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int ans=0;
        for(int j=0;j<k;j++){
            int x;ci(x);
            ans+=(1<<j)*x;
        }
        v[ans]=1;
    }
    for(int i=0;i<16;i++){
        for(int j=0;j<16;j++){
            if(v[i]&&v[j]&&!(i&j)) return 0*puts("YES");
        }
    }
    puts("NO");
}