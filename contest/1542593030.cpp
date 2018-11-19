#include <bits/stdc++.h>
using namespace std;

#define FILL(X, V)           memset((X), (V), sizeof(X))
#define SIZE(V)              int((V).size())
#define FOR2(cont,start,max) for(int (cont) = (start), _MAX = (max); (cont) < _MAX; (cont)++)
#define FOR(cont,max)        FOR2((cont), 0, (max))
#define LOG(x)               (31 - __builtin_clz(x))
#define W(x)                 cerr << "\033[31m" << #x << " = " << x << "\033[0m" << endl;
#define ii 					 pair<int, int>
#define ff 					 first
#define ss 					 second
#define oo 					 1e9
#define ep 					 1e-9
#define pb 					 push_back

typedef long long ll;
typedef unsigned long long ul;

int main() {
	ios::sync_with_stdio(false);
	bitset<26> start,end;
	string pass,in;
	int n;

	cin >> pass;
	cin >> n;
	FOR(i,n){
		cin >> in;
		start[in[0]-'a'] = true;
		end[in[1]-'a'] = true;
		if(pass == in){
			cout << "YES" << endl;
			return 0;
		}
	}
	if(start[pass[1]-'a'] && end[pass[0]-'a'])cout << "YES" << endl;
	else cout << "NO" << endl;
}
