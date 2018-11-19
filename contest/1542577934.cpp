#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
void Genawy(){
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
}
int n, k, v[100 * 1000 + 5][4];
bool t1[2], t2[2][2], t3[2][2][2], t4[2][2][2][2];
bool q(int ind, int i, vector<int>r){
	if (ind == k){
		if (k == 1)
			return t1[r[0]];
		else if (k == 2)
			return t2[r[0]][r[1]];
		else if (k == 3)
			return t3[r[0]][r[1]][r[2]];
		else
			return t4[r[0]][r[1]][r[2]][r[3]];
	}
	if (v[i][ind]){
		r.push_back(0);
		return q(ind + 1, i, r);
	}
	else{
		r.push_back(0);
		if (q(ind + 1, i, r))
			return true;
		r[r.size() - 1] = 1;
		return q(ind + 1, i, r);
	}
}
int main(){
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < k; j++){
			cin >> v[i][j];
		}
		if (k == 1)
			t1[v[i][0]] = true;
		else if (k == 2)
			t2[v[i][0]][v[i][1]] = true;
		else if (k == 3)
			t3[v[i][0]][v[i][1]][v[i][2]] = true;
		else
			t4[v[i][0]][v[i][1]][v[i][2]][v[i][3]] = true;
	}
	for (int i = 0; i < n; i++){
		bool ok = false;
		for (int j = 0; j < k; j++)
			ok |= v[i][j];
		if (!ok || q(0, i, vector<int>())){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}