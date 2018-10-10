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
int n,k;
ll a[N],ans;
map<ll,ll> s,x;

int main()
{
//    freopen(".txt","r",stdin);
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
        scanf("%I64d",a+i);
    for(int i=n;i>0;i--){
        ans+=x[a[i]*k];
        x[a[i]]+=s[a[i]*k];
        s[a[i]]++;
    }
    cout<<ans;
    return 0;
}
