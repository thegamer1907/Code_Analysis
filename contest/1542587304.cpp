#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i = (a); i < (b); i++)
#define iter(it,c) for(__typeof((c).begin()) it = (c).begin(); it != (c).end();++it)
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
const int INF = ~(1<<31);
const double pi = acos(-1);

int main() {
	cin.sync_with_stdio(false);
	double h,m,s;
	cin >> h >> m >> s;
	h += m/60;
	h += s/3600;
	m /= 60;
	m *= 12;
	m += s/3600;
	s /= 60;
	s *= 12;
	if(h > 12) h -= 12;
	if(m > 12) m -= 12;
	if(s > 12) s -= 12;
	vector<double> k = {h,m,s};
	double at,end;
	cin >> at >> end;
	bool inbetween = true;
	bool otherway = true;
	if(at > end) swap(at,end);
		rep(i,0,k.size()) {
			if(at < k[i] && k[i] < end) {
				inbetween = false;
			}
			if(k[i] < at) otherway = false;
			if(k[i] > end) otherway = false;
		}
	
	if(inbetween || otherway) cout << "YES" << endl;
	else cout << "NO" << endl;


	return 0;
}

