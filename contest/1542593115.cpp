/*input
ah
1
ha
*/
#include <bits/stdc++.h>

using namespace std;

#define fr(i,a,b) for(int (i) = (a); (i) < (b); ++(i))
#define rp(i,n) fr(i,0,n)
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define mt make_tuple
#define mp make_pair
#define sz(a) (int)(a.size())
#define IOS ios::sync_with_stdio(0);cin.tie(0);
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;

const int inf = 0x3f3f3f3f;
const int neginf = 0xc0c0c0c0;

int main(){
	string s;
	cin >> s;
	int n;
	cin >> n;
	vector<string> vec(n);
	rp(i, n) cin >> vec[i];
	if(n == 1){
		for(auto v : vec){
			string tmp = v;
			reverse(all(tmp));
			if(v == s || tmp == s){
				cout << "YES" << endl;
				return 0;
			}
			
		}
		cout << "NO" << endl;
		return 0;
	}
	else{
		for(auto v : vec){
			string tmp = v;
			reverse(all(tmp));
			if(v == s || tmp == s){
				cout << "YES" << endl;
				return 0;
			}
			
		}
		bool ok1 = false;
		bool ok2 = false;
		for(auto v : vec){
			if(v[1] == s[0]) ok1 = true;
			if(v[0] == s[1]) ok2 = true;
		}
		if(ok1 && ok2) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}

