#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vvi = vector<vi>;

const int INF = 2e9+5;

/*
    filippos
    Contest : 489
    Task : B
*/

int main(){
    cin.tie(0), cin.sync_with_stdio(0), cout.tie(0), cout.sync_with_stdio(0);
    int n; cin >> n;
    vi a(n);
    for(int &i: a)
    	cin >> i;
    int m; cin >> m;
    vi b(m);
    for(int &i: b)
    	cin >> i;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 0;
    for(int i = 0, j = 0; i < n; i++){
    	// we find a decent girl
    	while(j < m && b[j] + 1 < a[i])
    		j++;
    	// no more girls
    	if(j == m) break;
    	// can take
    	if(abs(a[i] - b[j]) <= 1){
			j++;
			ans++;    		
    	}
    }
    cout << ans;

    return cout << '\n', 0;
}