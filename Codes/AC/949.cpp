#include<bits/stdc++.h>
#define fi first
#define se second
#define sqr(x) ((x)*(x))
#define pb push_back
#define is insert
#define ll long long
#define mk(a,b) make_pair((a),(b))
#define all(a) (a).begin(),(a).end()
#define foru(i,b,e) for(ll i=b; i<=e; ++i)
#define ford(i,e,b) for(ll i=e; i>=b; --i)
#define pr(a,c) for(auto i: a) cout<<i<<c;
using namespace std;

typedef long double ld;
typedef pair<ll, ll> II;
typedef pair<II, ll> III;

struct HEAP_CMP{ bool operator() (II a, II b) {return 0;}};
typedef priority_queue<II, vector<II>, HEAP_CMP> heap;
bool cmp(II a, II b){return a.fi<b.fi;}
const ll M=1e5+7;
const ll MOD=1e9+7;
const ll MAX = 1e15+7;
const ld eps=1e-5;

int cx, ans, len;
int n,k,p;
string s;

void solve(){
    cin>>n>>k;
    cin>>s;


    foru(i,0,n-1){
        if(s[i]=='a') len++;
        else{
            if(cx==k){
                ans = max(ans, len);
                while(s[p]!='b') p++, len--;
                p++;
            }
            else{
                cx++;
                len++;
                ans = max(ans, len);
            }
        }
    }

    ans = max(ans, len);
    cx=0;
    len=0;
    p=0;

    foru(i,0,n-1){
        if(s[i]=='b') len++;
        else{
            if(cx==k){
                ans = max(ans, len);
                while(s[p]!='a') p++, len--;
                p++;
            }
            else{
                cx++;
                len++;
                ans = max(ans, len);
            }
        }
        //cout<<len<<" ";
    }
    ans = max(ans, len);
    cout<<ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
   // freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    //int t;
    //cin>>t;
    //while(t--)
    solve();
    return 0;
}
