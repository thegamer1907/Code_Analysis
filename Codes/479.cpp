#include<bits/stdc++.h>
#define X first
#define Y second
#define sqr(x) ((x)*(x))
#define pb push_back
#define is insert
#define ll long long
#define mk(a,b) make_pair((a),(b))
#define all(a) (a).begin(),(a).end()
#define foru(i,b,e) for(int i=b; i<=e; ++i)
#define ford(i,e,b) for(int i=e; i>=b; --i)
#define pr(a,c) for(auto i: a) cout<<i<<c;
using namespace std;

typedef long double ld;
typedef pair<ll, char> II;
typedef pair<II, int> III;

struct HEAP_CMP{ bool operator() (II a, II b) {return (a.X>b.X)||(a.X==b.X && a.Y>b.Y);}};
typedef priority_queue<II, vector<II>, HEAP_CMP> heap;
bool cmp(II a, II b){return a.X<b.X;}
const ll M=1e5+7;
const ll mod=1e9;
const ll MAX = 1e18+7;
const ld eps=1e-5;

ll x[50];
vector<ll> a;
int k;

void sinh(int u, int t){
    if(u>=8){
        if(t!=0) return ;
        ll num=0;
        foru(i,0,u-1) num=num*10+x[i];
        a.pb(num);
        return ;
    }

    foru(i,0,min(t,9)){
        x[u]=i;
        sinh(u+1, t-i);
    }
}
void solve(){
    sinh(0,10);
    cin>>k;


    sort(all(a));
    a.erase(unique(all(a)), a.end());

    cout<<a[k-1];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
   // freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    //solve();
    //int t;
    //cin>>t;
    //while(t--)
    solve();
    return 0;
}
