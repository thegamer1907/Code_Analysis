#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define pb push_back
#define mod ( ( ((n) % (k)) + (k) ) % (k))
#define forn(i,a,b) for(int i = a; i < b; i++)
#define forr(i,a,b) for(int i = a; i >= b; i--)
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef long double ld;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define MAX 200000+10
int n,q;
ll a[MAX],b[MAX];

bool can(int l,int r,ll c,ll dan){
//	cout << a[r]-a[l] << "\n";
	return a[r]-a[l]-dan <= c;
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> q;
	forn(i,1,n+1){
		cin >> a[i];
		a[i] += a[i-1];
	}
	forn(i,1,q+1){
		cin >> b[i];
	}
	int l = 0;
	ll dan = 0;
	forn(i,1,q+1){
		/*cout << "Dia " << i << "\n";
		cout << l << " " << dan << "\n";*/
		int ini = l,fin = n+1;
		while(ini < fin){
			int mit = (ini+fin)>>1;
			if(can(l,mit,b[i],dan))ini = mit+1;
			else fin = mit;
		}
		if(ini-1 >= n){
			cout << n << "\n";
			dan = 0;
			l = 0;
		}else{
			cout << n-ini+1 << "\n";
			dan += b[i]-(a[ini-1]-a[l]);
			if(dan < 0)dan = 0;
			l = ini-1;
		}
	}
}
