#include <bits/stdc++.h>

using namespace std;
int pass[100001];


int main(){
	string s;cin >> s;
	for(int i=1; i <= s.size(); i++){
		if(s[i] == s[i-1]){
			pass[i] = pass[i-1]+1;
		}else{
			pass[i] = pass[i-1];
		}
	}
	int n;cin >> n;
	for(int i= 0; i < n; i++){
		int a, b; cin >> a >> b;
		cout << pass[b-1]-pass[a-1] << endl;
	}
	return 0;
}