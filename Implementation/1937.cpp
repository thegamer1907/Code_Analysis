
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repr(i,a,b) for (int i = a; i > b; --i)
#define mm(lamb, tttt) memset(lamb, tttt, sizeof lamb)

#define null NULL
#define eps 0.000000001
#define mod 1000000007
#define PI 3.14159265358979323846
#define pb push_back
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define ALL(V) V.begin(), V.end()
#define sz(V) (int)V.size()
#define _ <<" "<<

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> ii;
typedef pair<int, pair<int,int> > iii;
typedef vector<ii> vii;

int main() {
	ios_base::sync_with_stdio(0);
	int t;
	cin>>t;
	int x = 0, y = 0, z = 0;
	rep(i, 0, t) {
		int a, b, c;
		cin>>a>>b>>c;
		x += a; y += b; z += c;
	}
	if (x == 0 and y == 0 and z == 0) cout<<"YES"<<"\n";
	else cout<<"NO"<<"\n";
	return 0;
}
