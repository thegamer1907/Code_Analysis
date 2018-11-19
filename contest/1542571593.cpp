#include <bits/stdc++.h>
using namespace std;

typedef set<vector<int>> Set;

Set prob;
int n, k;

void add(vector<int>& c, vector<int> a, vector<int> b){
	for(int j=0; j<k; j++){
		c[j] = a[j] + b[j];
	}
}

bool check(vector<int>& count, int added){
	if(added == 0)
		return false;
	for(int i=0; i<k; i++){
		if(count[i] * 2 > added)
			return false;
	}
	return true;
}

bool rec(Set::iterator p, int i, vector<int> count, int added){
	if(check(count, added)){
		//print(count);
		return true;
	}
	if(i == prob.size())
		return false;
	//print(*p);

	vector<int> nv(k);
	add(nv, count, *p);
	p++;
	bool sol = rec(p, i+1, nv, added+1);
	sol |= rec(p, i+1, count, added);
	p--;

	return sol;
}

int main() {
	cin >> n >> k;
	for(int i=0; i<n; i++){
		vector<int> v(k);
		for(int j=0; j<k; j++){
			cin >> v[j];
		}
		prob.insert(v);
	}
	vector<int> count(k);
	for(int j=0; j<k; j++){
		count[j] = 0;
	}
	if(rec(prob.begin(), 0, count, 0))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}
