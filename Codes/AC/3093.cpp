#include<bits/stdc++.h>
#define int long long
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define pb push_back
#define fi first
#define se second
typedef long long ll;
typedef long long LL;
typedef unsigned long long ull;
typedef unsigned long long uLL;
using namespace std;
const int maxn=1e5+10;
const int INF=0x3f3f3f3f;
int gcd(int a,int b){return b ? gcd(b, a%b): a;  }
int lowbit(int x) {return x&-x; }
map<int,int> mp;
int32_t main()
{
    int n; cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x; cin>>x;
        x=x-i+1;
        mp[i]=i;
        int c=0;
        int t=0;
        if(x>0)  c=x/n+(x%n!=0);
        if(x>0)  t=n*c;
        mp[i]=i+t;
       // cout<<mp[i]<<endl;
    }
    int ans=1e18;
    int t=0;
    for(int i=1;i<=n;i++)
    {
        if(mp[i]<ans) {ans=mp[i]; t=i; }
    }
    cout<<t<<endl;

}

