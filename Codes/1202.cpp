#include <iostream>
#include <vector>
#include <cstdio>
#include <cmath>
#include <map>
#include <cstring>
#include <set>

using namespace std;

int n, m;
map <string, int> M;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	if(n > m) cout << "YES\n";
	else if(n < m) cout << "NO\n";
	else{
		for(int i = 0; i < n; i++){
			string s;
			cin >> s;
			M[s] = 1;
		}
		int cnt = 0;
		for(int i = 0; i < m; i++){
			string s;
			cin >> s;
			if(M[s]) cnt++;
		}

		if(n - cnt/2 > m - (cnt + 1)/2) cout << "YES";
		else cout << "NO";
	}
	return 0;
}