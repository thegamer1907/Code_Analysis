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

const int N = 1000002;
int n,f[N];
char s[N];
int z[N];

void computeZ(){
	int L = 0, R = 0;
	for (int i = 1; i < n; i++) {
 	 if (i > R) {
 	   L = R = i;
 	   while (R < n && s[R-L] == s[R]) R++;
 	   z[i] = R-L; R--;
 	 } else {
 	   int k = i-L;
 	   if (z[k] < R-i+1) z[i] = z[k];
  	  else {
  	    L = i;
  	    while (R < n && s[R-L] == s[R]) R++;
 	     z[i] = R-L; R--;
 	   }
 	 }
	}
}

int main(){
    scanf("%s", s);
    n = strlen(s);
    computeZ();
    lp(i,1,n-1) f[i] = max(f[i-1], z[i]);
    int mx = 0;
    lpd(i,n-1,1){
        --f[z[i]];
        if(z[i] == n-i and f[i-1] >= z[i]) mx = max(mx, z[i]);
    }
    if(mx) lp(i,0,mx-1) printf("%c", s[i]);
    else cout <<"Just a legend";
}

/*
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
uniform_int_distribution<type>(l, r+1)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
*/
