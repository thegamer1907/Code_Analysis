// UTRECHT UNIVERSITY
#include<bits/stdc++.h>
using namespace std;

#define x first
#define y second
#define pb push_back
#define eb emplace_back
#define rs resize
#define rep(i,a,b) for(auto i = (a); i != (b); ++i)
#define all(v) (v).begin(), (v).end()

typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;

const int INF = 2147483647;
const ld PI = acos(-1.0);




bool run()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;
	int pos[16];
	rep(i,0,16) pos[i] = 0;

	rep(i,0,n){
		int bi = 0;
		rep(j,0,k){
			int b;
			cin >> b;
			bi |= b * (1<<j);
		}
#ifdef LOCAL
		cout << bi << endl;
#endif
		pos[bi]++;
	}

	if(pos[0] > 0){
		return true;
	}

	int full = 15;
	int tw[4] = {1,2,4,8};
	int t = 0;
	for(int m : tw){
		t += (pos[m] > 0);
	}
#ifdef LOCAL
	cout << t << endl;
#endif
	if(t >= 2)
		return true;
	
	if(t == 1){
		int ind = -1;
		for(int i : tw)
			if(pos[i] > 0)
				ind = i;
		assert(ind != -1);

		rep(i,0,16){
			if(pos[(i& (~ind))] > 0)
				return true;
		}
		return false;
	}

	if(t == 0){
		for(int i : tw)
			for(int j : tw){
				if(j == i)
					continue;
				int m1 = i | j;
				int m2 = full & (~m1);
				if(pos[m1] > 0 && pos[m2] > 0)
					return true;
			}
		return false;
	}

	return 0;
}

int main(){
	bool ans = run();
	if(ans)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
