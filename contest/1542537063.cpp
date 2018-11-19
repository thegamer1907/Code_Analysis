#include<bits/stdc++.h>
using namespace std;

const int mx=50;

int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n,k,cur,x; cin>>n>>k;
	vector<bool> on(mx,false);
	for (int i=0; i<n; i++) {
		cur=0;
		for (int j=0; j<k; j++) cin>>x, cur<<=1, cur+=x;
		on[cur]=true;
	}
	for (int i=0; i<mx; i++)
		for (int j=0; j<mx; j++)
			if(!(i&j)&&on[i]&&on[j]) {
				cout << "YES" << endl;
				return 0;
			}
	cout << "NO" << endl;
	return 0;
}
