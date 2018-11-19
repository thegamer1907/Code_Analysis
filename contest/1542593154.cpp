#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<vector>
#include<string>
#include<functional>            
#include<fstream>
#include<ctime>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> point;
typedef pair<int, int> pii;
const ll inf = 9.2e18;
const int maxn = 300007;
const int INF = 2.1e9;
const int MOD = 1e9 + 7;
const double dif = 1e-7;
const double PI = acos(-1.0);

int n, m, k;

int main(){
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	string s, s1;
	while (cin >> s){
		cin >> n;
		int ok = 0, flag1 = 0, flag2 = 0;
		for (int i = 0; i < n; i++){
			cin >> s1;
			if (s == s1) ok = 1;
			if (s1[1] == s[0]) flag1 = 1;
			if (s1[0] == s[1]) flag2 = 1;
		}
		if (flag1&&flag2) ok = 1;
		
		if (ok) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}