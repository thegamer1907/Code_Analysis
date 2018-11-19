#include <bits/stdc++.h> 

#define repp(i,a,b) for(int i = a; i <= b; i++)
#define rep(i,n) for(int i = 1; i <= n; i++)
#define onesll(c) __builtin_popcountll(c)
#define ones(c) __builtin_popcount(c)
#define all(c) c.begin(), c.end()
#define llu unsigned long long
#define sz(c) (int) c.size()
#define pb(x) push_back(x)
#define lb lower_bound
#define up upper_bound
#define ll long long 
#define endl "\n"
using namespace std;
// stringstream
stringstream ss;

// Coding begins here
const int N = 1e5 + 5;
const int mod = 1e9 + 7;

int arr[N + 10];

int main(){
	ios_base::sync_with_stdio(false);
	string s;
	cin >> s;
	int n;
	cin >> n;
	string arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	bool st = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			string x = arr[i] + arr[j];
			if(x.find(s) != string::npos){
				st = 1;
				break;
			}
		}
		if(st == 1){
			break;
		}
	}
	if(st == 1){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
} 