#include <bits/stdc++.h>
#define x first
#define y second 
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()

typedef long long ll;
 
using namespace std;

set <string> st;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n + m; i++){
		string s;
		cin >> s;
		st.insert(s);
	}
	int cnt = n + m + st.size();
	m -= cnt % 2;
	cout << (n > m ? "YES" : "NO");
}
