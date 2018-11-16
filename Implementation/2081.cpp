#include <bits/stdc++.h>

using namespace std;

int main(){
	int t[3]{0};
	int n;
	
	cin >> n;
	
	while(n--){
		int v[3]{0};
		cin >> v[0] >> v[1] >> v[2];
		t[0] += v[0];
		t[1] += v[1];
		t[2] += v[2];
	}
	
	if(t[0] == 0 && t[1] == 0 && t[2] == 0) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}