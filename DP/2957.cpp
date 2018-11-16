#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <deque>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

const int INF = 2e9+5;

/*
	filippos
	Contest : 676
	Task : C
*/

void print(vi &v){
	for(int i : v)
		cout << i << ' ';
	cout << '\n';
}

int main(){
	cin.tie(0), cin.sync_with_stdio(0);
	
	int n, k; cin >> n >> k;
	string s; cin >> s;
	
	//we build prefix sums on even and on odd
	vi pf_a(n);
	for(int i = 0; i < n; i++){
		pf_a[i] += s[i] == 'a';
		if(i) pf_a[i] += pf_a[i-1];
	}
	vi pf_b(n);
	for(int i = 0; i < n; i++){
		pf_b[i] += s[i] == 'b';
		if(i) pf_b[i] += pf_b[i-1];
	}
	//O(nlogn)
	int ans = 0;
	for(int i = 0; i < n; i++){
		//we take from this position. we do two binary searches
		//we will remove a
		int x = upper_bound(pf_a.begin(), pf_a.end(), k + (i ? pf_a[i-1] : 0)) - pf_a.begin();
		ans = max(ans, x - i);
		//we remove odds
		x = upper_bound(pf_b.begin(), pf_b.end(), k + (i ? pf_b[i-1] : 0)) - pf_b.begin();
		ans = max(ans, x - i);
	}
	cout << ans;
}