#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb emplace_back
#define x first
#define y second
#define sz(a) ((int)(a).size())
#define rep(i,a,b) for(auto i=(a); i<(b); i++)
#define dec(i,n,a) for(auto i=(n); i>=(a); i--)
#define clr(a,v) memset(a, v, sizeof(a))
#define all(a) (a).begin(),(a).end()
#define EPS 2e-9
#define fcin ios_base::sync_with_stdio(false)
#define db(x) cerr << #x << " == " << x << endl
#define _ << " " <<
#define MAXN 1010100
#define LOGN 18
typedef long long ll;
typedef double ld;
typedef pair<ll,ll> pii;
typedef vector<int> vi;

int n;

bool ok(int v){
	int s=0;
	while(v){
		s+=v%10;
		v/=10;
	}
	return s==10;
}

int main(){
	scanf("%d", &n);
	rep(i,1,1e9) if(ok(i)){
		n--;
		if(!n){printf("%d\n", i);
			return 0;
		}
	}
}

