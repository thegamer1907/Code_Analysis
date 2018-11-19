#include<bits/stdc++.h>
using namespace std;

vector<int> arr[20];
int n, k, allmask, sz;

bool chk(int mask) {
	int v[5] = {0,0,0,0,0}, cnt = 0;
	for(int i = 0; i < sz; i++) {
		if((mask & (1<<i))) {
			cnt++;
			for(int j = 0; j < k; j++)
				v[j] += arr[i][j];
		}
	}
	for(int i = 0; i < 5; i++)
		if(v[i]*2 > cnt) return false;
	return true;
}

int main() {
	set<vector<int> > st;
	int x;
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; i++) {
		vector<int> tmp;
		for(int j = 0; j < k; j++) {
			scanf("%d", &x);
			tmp.push_back(x);
		}
		st.insert(tmp);
	}
	int cur = 0;
	for(set<vector<int> >::iterator it = st.begin(); it != st.end(); it++)
		arr[cur++] = *it;
	sz = st.size();
	allmask = (1<<sz) - 1;
	for(int i = 1; i <= allmask; i++)
		if(chk(i) == true) {
			cout << "YES";
			return 0;
		}
	cout << "NO";
	return 0;
}
