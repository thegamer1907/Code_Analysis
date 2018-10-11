#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	set<string> p, e;
	for(int i = 0; i<n; i++){
		string s;
		cin >> s;
		p.insert(s);
	}
	int common = 0;
	for(int i = 0; i<m; i++){
		string s;
		cin >> s;
		if(p.find(s) != p.end()){
			common++;
		}
	}
	int lp = n - common + (common+1)/2;
	int le = m - common + (common)/2;
	if(le >= lp){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
	}
	return 0;
}