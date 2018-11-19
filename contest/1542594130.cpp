#include<bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define x first
#define y second
#define fi first
#define se second
#define sz(a) ((int)(a).size())
#define rep(i, a, b) for(ll (i) = (a); (i) < (b); (i)++)
#define dec(i, a, b) for (int (i) = (a); (i) >= (b); (i)--)
#define clr(a,v) memset(a, v, sizeof(a))
#define all(a) (a).begin(),(a).end()
#define LOGN 16
#define MAXN 303030
#define EPS 1e-9
#define fcin ios_base::sync_with_stdio(false)
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,ll> pii;
typedef vector<int> vi;

int n, ans, aa, bb;
char a, b;
string vet[MAXN];

int32_t main(){
	scanf(" %c %c", &a, &b);
	scanf("%d", &n);
	rep(i,0,n){
		cin >> vet[i];
		if(vet[i][0] == a && vet[i][1] == b) ans=1;
		if(vet[i][1] == a) aa=1;
		if(vet[i][0] == b) bb=1;
	}
	if(aa&&bb)ans=1;
	if(ans) puts("YES"); else puts("NO");
}


