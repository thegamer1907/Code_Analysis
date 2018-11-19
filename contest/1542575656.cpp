

#include <bits/stdc++.h>
#define pb push_back
#define pp pop_back
#define mp make_pair
#define f first
#define s second
#define kz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FILE ""
#define fr freopen(FILE".in", "r", stdin); freopen(FILE".out", "w", stdout);
#define y1 asafas
#define x0 afasfa
#define y0 safasf
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;
typedef vector <int> vi;
typedef pair <int, int> pii;

const int N = 3e5 + 111, inf = 1e9, mod = 1e9 + 7;
const ll linf = 1e18;

string s, t[N];
int n;

int main(){
	cin >> s;
	cin >> n;
	for(int i = 1; i <= n; ++i)
		cin >> t[i];
	for(int i = 1; i <= n; ++i)
	for(int j = 1; j <= n; ++j){
		if(t[i][1] == s[0] && t[j][0] == s[1]){
			cout << "YES";
			return 0;
		}
	}	
	for(int i = 1; i <= n; ++i)
		if(t[i] == s){
			cout << "yES";
			return 0;
		}
	cout << "NO";
	return 0;
}