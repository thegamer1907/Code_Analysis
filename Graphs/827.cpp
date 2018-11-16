#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, t;
	string s;
	cin >> n >> t >> s;
	while(t--){
		vector<int> v;
		for(int i = 1; i < n; i++){
			if(s[i] == 'G' && s[i-1] == 'B'){
				v.push_back(i);
				//cout << "sw: " << i << ", " << i-1 << endl;
			}
		}
		for(int i = 0; i < v.size(); i++){
			swap(s[v[i]], s[v[i]-1]);
		}
	}
	cout << s << endl;
	return 0;
}
