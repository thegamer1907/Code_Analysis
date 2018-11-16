#include <bits/stdc++.h>
using namespace std;

int main(){
	
	
	int t, n;
	
	vector<int> v;
	cin >> n >> t;
	v.resize(n);
	
	for( int i = 0; i < n - 1; i++){
		cin >> v[i];
	}
	
	int dist = 1;
	for( int i = 0; i < n - 1; i++){
		if( dist == t){
			cout << "YES";
			return 0;
		}
		dist = dist + v[dist - 1];
	}
	
	if( dist == t){
		cout << "YES";
	}else{
		cout << "NO";
	}
	
	return 0;
}