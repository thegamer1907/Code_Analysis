#include <bits/stdc++.h>
#include <bitset>
using namespace std;

const int N = 100'005;

vector <set <int>> used(N);

 int main()
 
 
 {
     ios_base::sync_with_stdio(0);
 	int n, m; 
 	cin >> n >> m;
 	vector <int> color(n);
 	int ans = 1'000'000;
 	for (int i = 0; i < n; i++) {
 		cin >> color[i];
 		ans = min(ans, color[i]);
 	}
 	int mx = 0;
 	for (int i = 0; i < m; i++) {
 		int a, b;
 		cin >> a >> b;
 		a--;
 		b--;
 		if (color[a] != color[b]) {
 			used[color[a]].insert(color[b]);
 			used[color[b]].insert(color[a]); 
}
 	}
 	for (int i = 0; i < N; i++) {
 		if (used[i].size() > mx)
 			mx = used[i].size(), ans = i;
 			}
 	cout << ans ;
//<< " " << mx;
 }