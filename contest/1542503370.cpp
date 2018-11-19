//IN THE NAME OF ALLAH
#include<bits/stdc++.h>
#define go ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define error(x) cerr << #x << " = " << (x) << endl;
#define RET(X) cout << X , exit(0);
#define bit(X,Y) ((X>>Y)&1)
#define pb push_back
#define ll long long
using namespace std;
const ll inf = 2e18;const ll mod = 1e9 + 7; const ll delta = 10909; const ll maxn = 1e6 + 10;
/**********************Variables**********************/
ll dp[4000];ll s[4000];ll c[4000];bool is[16];
/**********************Functions**********************/
ll power(ll a,ll b)
{
    ll ans=1;
    while(b>0)
    {
        if(b&1)ans = a*ans%delta;
        b/=2;a=a*a%delta;
    }
    return ans %delta;
}
/************************Start************************/
int main()
{
    int n,k;cin >>n>>k;
    for(int i=0;i<n;i++)
    {
        int t=0;
        for(int j=0;j<k;j++)
        {
            int ai;cin >>ai;
            t += (1<<j)*ai;
        }
        is[t]=true;
    }
    for(int i=1;i<(1<<16);i++)
    {
        int s=i;int j=0;int l=0;int l1=0,l2=0,l3=0,l4=0;
        while(s>0)
        {
            if(s&1)
            {
                l++;
                if(!is[j])goto h;
                int sp=j;
                if(sp&1)l1++;sp/=2;
                if(sp&1)l2++;sp/=2;
                if(sp&1)l3++;sp/=2;
                if(sp&1)l4++;sp/=2;
            }
            j++;s/=2;
        }
        if(l1*2<=l&&l2*2<=l&&l3*2<=l&&l4*2<=l)return cout <<"YES",0;
        h:;
    }
    cout <<"NO";
    return 0;
}
