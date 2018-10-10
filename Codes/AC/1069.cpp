#include <bits/stdc++.h>
using namespace std;

vector <pair<long long int,long long int> > arr;
bool cmp(int n,pair<int,int> const& p)
{
	return p.first>=n;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	pair <long long int,long long int> tmp;
	long long int n,i,j=1,d,a=0,b=0,m=0;
	cin >> n >> d;
	tmp.first=a,tmp.second=b;
	arr.push_back(tmp);
	for(i=1;i<=n;i++)
	{
		cin >> a >> b;
		tmp.first=a,tmp.second=b;
		arr.push_back(tmp);
	}
	sort(arr.begin(),arr.end());
	for(i=1;i<=n;i++)
		arr[i].second+=arr[i-1].second;
	//tmp.first=1000000000000000000,tmp.second=arr[i-1].second;
	//arr.push_back(tmp);
	for(i=1;i<=n;i++)
	{
		auto up =upper_bound(arr.begin(),arr.end(),arr[i].first+d,cmp);
		j=up-arr.begin();
		//cout << i << j << endl;
		m=max(m,arr[j-1].second-arr[i-1].second);
	}
	cout << m;
	return 0;
}