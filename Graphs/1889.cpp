#include<bits/stdc++.h>
#define ll unsigned long long
#define F first
#define S second
#define pb push_back
#define maxn 100009
#define mod 1000000007
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define INF 10000000000000000ll
#define INM -INF
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()

using namespace std;


int main(){
	
	int n, m;
	cin >> n;
	vector <int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	cin >> m;
	vector <int> b(m);
	for(int i = 0; i < m; i++) cin >> b[i];
	sort(all(a));sort(all(b));
	int i = n - 1, j = m - 1;
	int ans = 0;
	while(i >= 0 && j >= 0){
		if(a[i] < b[j] - 1) j--;
		else if(a[i] > b[j] + 1) i--;
		else{
			ans++;
			i--;
			j--;
		}
	}
	cout << ans;
}












































