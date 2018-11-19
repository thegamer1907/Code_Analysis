#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <bitset>
#include <set>

using namespace std;


bool f(vector<vector<int> > & a, vector<int> res, int j, int k){
	int n = a.size();
	int m = a[0].size();
	if (j == n){
		int tmp = 0;
		for (int i=0; i < m; ++i){
			if (2*res[i] >= k) tmp++;
		}
		if (tmp == m && k != 0){
			return true;
		}
		return false;
	}
	bool b = f(a, res, j+1, k);
	for (int i=0; i < m; ++i){
		res[i] += a[j][i];
	}
	
	return b || f(a, res, j+1, k+1);
}
int main(){
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;
	set<vector<int> > s;
	vector<vector<int>> a;
	vector<int> tmp(k);
	int b;
	for (int i=0; i<n; ++i){
		for (int j=0; j<k; ++j){
			cin >> b;
			tmp[j] = 1-b;
		}
		if (s.find(tmp) == s.end()){
			s.insert(tmp);
			a.push_back(tmp);
		}
	}
	tmp.assign(k, 0);
	cout << (f(a, tmp, 0, 0)? "YES" : "NO") << endl;
	return 0;
}