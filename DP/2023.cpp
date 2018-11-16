#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i = a; i <b; i++)
#define FOR(i,n) for(int i = 0; i < n; i++)

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
	int a[n];
	FOR(i,n){
		cin >> a[i];
	}
	
	set<int>s;
	int p[n];
	for(int i = n-1; i >= 0; i--){
		s.insert(a[i]);
		p[i] = s.size();
	}
	
	FOR(i, m){
		int j;
		cin >> j;
		cout << p[j-1] << "\n";
	}
    
	return 0;
}

