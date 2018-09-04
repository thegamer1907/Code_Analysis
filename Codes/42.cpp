#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n,l;
	cin>>n>>l;
	double ans=0;
	vector<double>v;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	ans=max(ans,v[0]);
	ans=max(ans,l-v[n-1]);
	for (int i = 1; i < n; ++i)
	{
		ans=max(ans,(v[i]-v[i-1])/2);
	}
	printf("%.10f\n", ans);
	return 0;
}