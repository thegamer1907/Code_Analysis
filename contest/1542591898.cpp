#include <bits/stdc++.h>
 
using namespace std;
 
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define fileio freopen("in.in", "r", stdin),freopen("out.out", "w", stdout);
#define ll long long int
#define FF first
#define SS second
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define pll pair<long long int,long long int>
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define pd(x) printf("%d\n",x)
#define plld(x) printf("%lld\n",x)
#define pss printf
#define MOD 1000000007
#define INF 1e18
#define eps 0.00001
#define endl '\n'
#define debug(n1) cout<<n1<<endl
string s;
ll n;
bool st[26],en[26];
string a[105];
int main() {
cin>>s;
cin>>n;
for(int i=1;i<=n;i++)
cin>>a[i];
bool y=0;
for(int i=1;i<=n;i++)
if(a[i]==s)y=1;
for(int i=1;i<=n;i++)
st[a[i][0]-'a']=1,en[a[i][1]-'a']=1;
if(en[s[0]-'a']&&st[s[1]-'a'])y=1;
if(y)
pss("YES\n");
else
pss("NO\n"); 
    return 0;
           } 