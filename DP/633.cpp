#include <bits/stdc++.h>

using namespace std;
#define ll long long
const ll N = 2e5;
ll ans = 0;
ll arr[N], par[N];

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n, l, r, t = 0;
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i ++){
    	if (i != a.size() - 1 && a[i] == a[i + 1])
    		t ++;
    	par[i + 1] = t;
	}
	cin >> n;
	for (int i = 0; i < n; i ++){
		cin >> l >> r;
		cout << par[r - 1] - par[l - 1] << "\n";
	}
    return 0;
}
