#include <bits/stdc++.h>
using namespace std;




int main(){
	vector<int> V;
	vector<int> ans;
	int n;
	cin >> n;
	for(int i = 0;i < n;++i){
		int a;
		cin >> a;
		V.push_back(a);
	}
	for(int i = 0;i < n;++i){
		if(V[i] % n <= i) ans.push_back(V[i] / n);
		else ans.push_back((V[i] / n) + 1);
	}
	int minind = -1;
	int minn = 1000000000;
	for(int i = 0;i < n;++i){
		if(minn > ans[i]){
			minind = i;
			minn = ans[i];
		}
	}
	cout << minind + 1;
	return 0;
}
