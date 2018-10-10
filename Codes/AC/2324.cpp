#include <bits/stdc++.h>
using namespace std;
#define FOR(x, y, z) for(int x = y; x <= z; x++)
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl "\n"
#define x1 lol
#define y1 lal
#define sz(x) (int)(x.size())
#define ex exit(0)
typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vi;
int const N=(int)2e7+1,INF=(int)1e9+1, MOD=(int)1e9+7;
ll mypow(ll a, ll b, int mod) {
    ll rv = 1;
    while (b) {
        if (b % 2)
            rv = rv*a%mod;
        a = a*a %mod;
        b /= 2;
    }
    return rv;
}
bool ok,used[1500][1500],same;
ll n,m,ans,k,cur,cnt,pos;
ll a[N],b[N],pre[N];
vector <pii > v;
bool p[N];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    //freopen("output.txt","w",stdout);
    string s;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        a[x]++;
    }
    for (int i=2; i<=10000000; ++i)
        p[i]=1;
    p[0] = p[1] = false;
    for (int i=2; i<=10000000; ++i)
        if (p[i])
            if (i  <= 10000000)
                for (int j=i; j<=10000000; j+=i){
                    p[j] = false;
                    if(a[j])
                        b[i]+=a[j];

                }
  //  cout<<b[9999991];
    for (int i=1; i<=10000000; ++i)
        pre[i]=b[i]+pre[i-1];
   // for(int i=1;i<=20;i++)cout<<pre[i]<<endl;
    cin>>m;
    while(m--){
        int l,r;
        cin>>l>>r;
        if(r>10000000)
            r=10000000;
        if(l>10000000)
            l=10000000;
        cout<<pre[r]-pre[l-1]<<endl;
    }
    return 0;
}
