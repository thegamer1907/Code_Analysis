#include<bits/stdc++.h>
using namespace std;

#define FastRead        ios_base::sync_with_stdio(0);cin.tie(0);
#define fread           freopen("input.txt","r",stdin);
#define fwrite          freopen("output.txt","w",stdout);
#define nl              "\n"
#define ll              long long
#define ull             unsigned long long
#define mk              make_pair
#define pb              push_back
#define sz(a)           (int)a.size()
#define pii             pair<int,int>
#define pLL             pair<ll,ll>
#define mem(a)          memset(a,-1,sizeof a)
#define clr(a)          memset(a,0,sizeof a)
#define all(a)          a.begin(),a.end()
#define UNIQUE(a)       sort(all(a)),a.erase(unique(all(a)),a.end())
#define SORT(v)         sort(v.begin(),v.end())
#define REV(v)          reverse(v.begin(),v.end())
#define ff              first
#define ss              second
#define sq(a)           ((a)*(a))
#define For(i,a,b)      for(int i=a;i<=b;i++)
#define Rof(i,a,b)      for(int i=a;i>=b;i--)
#define Rep(i,b)        for(int i=0;i<b;i++)
#define MOD             1000000007
#define PI              acos(-1.0)
#define eps             1e-9
#define Linf            2e18
#define inf             1<<30
#define MX5             100005
#define MX6             1000006

int dx[] = {-1,+0,+1,+0,+1,+1,-1,-1,+0};
int dy[] = {+0,-1,+0,+1,+1,-1,+1,-1,+0};
//..........................................GEO................................
#define isRight(r,a,b)  ((b.y-r.y)*(a.x-r.x)<(b.x-r.x)*(a.y-r.y))
#define dot(r,a,b)      ((a.x-r.x)*(b.x-r.x)+(a.y-r.y)*(b.y-r.y))
#define ABSDIS(a,r)     (sqrt(sq(a.x-r.x)+sq(a.y-r.y)))
#define angle(r,a,b)    ((180.0*(acos(dot(r,a,b)/(ABSDIS(a,r)*ABSDIS(b,r)))))/PI)
template <typename T> inline T SqrDis(T x1, T y1, T x2, T y2){return sq(x1 - x2) + sq(y1 - y2);}
template <typename T> inline T Area2(T Ax, T Ay, T Bx, T By, T Cx, T Cy){T ret = Ax * (By - Cy) + Bx * (Cy - Ay) + Cx * (Ay - By);
    if(ret < 0) return ret = -ret;return ret;
}
//struct coord{double x,y;bool operator==(coord a){return (x==a.x && y==a.y);}};
//..........................................NT.................................
template <typename T> inline T bigmod(T A,T B,T M = MOD){T ret = 1;while(B){if(B & 1) ret = (ret * A) % M;A = (A * A) % M;B = B >> 1;}return ret;}
template <typename T> inline T invmod (T A,T M = MOD){return BigMod(A,M-2,M);}

//.........................................END..................................


int ara[MX5];
int ans[MX5];
int main(){

    FastRead

    int n;
    cin>>n;
    Rep(i,n) cin>>ara[i];
    For(i,1,n-1) ara[i]=ara[i-1]+ara[i];
    vector<pii> mv;
    int m;
    cin>>m;
    Rep(i,m){
        int a;
        cin>>a;
        mv.pb(mk(a,i));
    }
    sort(mv.begin(),mv.end());
    int p=0;
    For(i,0,sz(mv)-1){
        int a=mv[i].ff;
        while(a>ara[p]) p++;
        ans[mv[i].ss]=p;
    }
    Rep(i,m) cout<<ans[i]+1<<nl;

}
