#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n,d;
long long ans,cs[100000];
vector<pair<int,int> >v;
int main() {
	cin>>n>>d;
	for(int i = 0,a,b;i < n;i++){
		cin >> a >> b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end());
	for(int i = 0;i < n;i++){
		cs[i] = v[i].second;
		if(i != 0)cs[i]+=cs[i - 1];
	}
	for(int i = 0;i < n;i++){
		int r = lower_bound(v.begin(),v.end(),make_pair(v[i].first +d,-1)) - v.begin() - 1;
		long long temp = cs[r];
		if(i != 0)temp-=cs[i - 1];
		ans = max(ans,temp);
	}
	cout << ans << endl;
	return 0;
}