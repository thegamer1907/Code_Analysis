#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back

using namespace std;
typedef long long int ll;

int main(void){
	fast;
	int n; cin >> n;
	vector<int> v;
	while(n){
	    v.pb(n%10);
	    n /= 10;
	}
	reverse(v.begin(), v.end());
	int N = v.size();
	vector<vector<int>> ans;
	while (1){
	    bool flag = 0;
	    vector<int> next;
	    for (int i = 0; i < N; ++i){
	        if (v[i]){
	            flag = 1;
	            --v[i];
	            next.pb(1);
	        }
	        else next.pb(0);
	    }
	    if (!flag) break;
	    ans.pb(next);
	}
	cout << ans.size() << '\n';
	for (auto it : ans){
	    int next = 0;
	    for (auto it2 : it){
	        next = next*10 + it2;
	    }
	    cout << next << ' ';
	}
}