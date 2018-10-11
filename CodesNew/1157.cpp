#include <bits/stdc++.h>
#define FIOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sc(a) scanf("%d ",&a);
#define ssc(a,b) scanf("%d %d ",&a,&b);
#define sssc(a,b,c) scanf("%d %d %d ",&a,&b,&c);
#define mp(a,b) make_pair(a,b)
#define pb(x) push_back(x)
#define all(a) a.begin(),a.end()
#define forn(i,n) for(int i=0;i<n;i++)
#define forq(i,q,n) for(int i=q;i<n;i++)
#define form(i,n) for(int i=n;i>=0;i--)
#define forp(i,q,n) for(int i=q;i>=n;i--)
#define rota(a,n) rotate(a.begin(),a.begin()+n,a.end())
#define fi first
#define se second
#define RT return 0;
#define INF 1000000010
#define MOD 1000000007
#define MAXN
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<int,pii> tii;
typedef pair<ll,ll> pll;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<pll> vll;
typedef double du;
typedef long double ld;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef vector<vii> vvii;
typedef vector<vll> vvll;

vi d,t;

int main(){
	if(fopen("input.txt","r"))freopen("input.txt","r",stdin);

        int n;
        sc(n)

        d.assign(n,0);
        forn(i,n)sc(d[i])

        t.assign(n,0);
        forn(i,n)t[i]=max(d[i]-i,0)/n+(max(d[i]-i,0)%n!=0);

        int u=INF;
        forn(i,n)u=min(u,t[i]);

        forn(i,n)if(t[i]==u){
                printf("%d",i+1);
                RT
        }

	RT
}
