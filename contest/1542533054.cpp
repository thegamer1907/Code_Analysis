#include <bits/stdc++.h>
using namespace std;

vector<int> prb;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, k; cin >> n >> k;
	for(int i=0;i<n;i++){
		int cur = 0;
		for(int j=0;j<k;j++){
			int x; cin >> x;
			cur = (cur<<1) | x;
		}
		prb.push_back(cur);
	}
	sort(prb.begin(), prb.end());
	prb.resize(distance(prb.begin(), unique(prb.begin(), prb.end())));
	n = prb.size();
	for(int i=1;i<(1<<n);i++){
		vector<int> tot(k, 0);
		for(int _=0;_<n;_++){
			if((i>>_)&1){
				for(int j=0;j<k;j++){
					if((prb[_]>>j)&1) tot[j]--;
					else tot[j]++;
				}
			}
		}
		bool flag = true;
		for(int j=0;j<k;j++) flag &= (tot[j]>=0);
		if(flag){
			cout << "YES" << '\n';
			return 0;
		}
	}
	cout << "NO" << '\n';
	return 0;
}