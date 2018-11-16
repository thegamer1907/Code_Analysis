/*input
10 10
1 2 3 4 1 2 3 4 100000 99999
1
2
3
4
5
6
7
8
9
10

*/
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define x first
#define y second
#define all(a) a.begin(),a.end()
#define endl '\n'
#define db(a) cout<<#a<<" = "<<a<<endl

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;

	int a[n];

	for(int i=0; i<n; i++) cin >> a[i];

	set<int> s;
	int dp[n];

	for(int i=n-1; i>=0; i--){
		s.insert(a[i]);
		dp[i] = s.size();
	}

	for(int i=0; i<m; i++){
		int q;
		cin >> q;
		cout << dp[q-1] << endl;
	}                                         
}