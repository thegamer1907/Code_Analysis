#include<bits/stdc++.h>
using namespace std;
#define ifor(i,a,n) for(int i=a;i<n;i++)
#define dfor(i,a,n) for(int i=n-1;i>=a;i--)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin,(x).end()
#define Pb push_back
#define Mp make_pair
#define fi first
#define se second
typedef long long ll;
typedef vector<int> VI;
typedef pair<int,int> PII;
const ll mod = 1000000007;
ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
// head

bool vis[16];
bool a[16][16];
int n,k;
bool flag = false;

int main(){
    cin>>n>>k;
    memset(a,false,sizeof(a));
    memset(vis,false,sizeof(vis));
    ifor(i,0,16)
        ifor(j,0,16) a[i][j] = ((i&j)==0);
    ifor(i,0,n){
        int x = 0,y;
        ifor(j,0,k) cin>>y,x+=y<<j;
        if(x == 0){
            flag = true;
            break;
        }
        ifor(j,0,16) if (a[x][j]&&vis[j]){
            //cout<<x<<' '<<j<<endl;
            flag = true;
            break;
        }
        vis[x] = true;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

