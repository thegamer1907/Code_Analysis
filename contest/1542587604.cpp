#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define lp(i,a,n) for(int i=a;i<=n;++i)
#define lpd(i,a,n) for(int i=a;i>=n;--i)
#define mem(a,b) memset(a,b,sizeof a)
#define all(v) v.begin(),v.end()
#define println(a) cout <<(a) <<endl
#define sz(x) ((int)(x).size())
#define readi(x) scanf("%d",&x)
#define read2i(x,y) scanf("%d%d",&x,&y)
#define read3i(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define mod 1000000007
#define eps 1e-8
#define infi 1000000000
#define infll 1000000000000000000ll
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef set<int> si;
typedef map<int,int> mii;

const int N = 100002;
int h,m,s,t1,t2;

int main(){
    read3i(h,m,s);
    read2i(t1,t2);

    vi hAngle;
    hAngle.pb(2*30);
    hAngle.pb(30);
    hAngle.pb(0);
    for(int i = -30; i > -180; i -= 30) hAngle.pb(i + 360);
    for(int i = 180; i >= 90; i -= 30) hAngle.pb(i);

    vi msAngle;
    for(int i = 90; i >= 0; i -= 6) msAngle.pb(i);
    for(int i = -6; i > -180; i -= 6) msAngle.pb(i + 360);
    for(int i = 180; i >= 90; i -= 6) msAngle.pb(i);

    vector<pii> angles;
    angles.pb(pii(hAngle[h-1], 0));
    angles.pb(pii(hAngle[t1-1], 1));
    angles.pb(pii(hAngle[t2-1], 1));
    angles.pb(pii(msAngle[m], 0));
    angles.pb(pii(msAngle[s], 0));
    sort(all(angles));

    lp(i,0,4) if(angles[i].s and angles[(i+1)%5].s) return cout <<"YES", 0;
    cout <<"NO";
}

/*
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
*/
