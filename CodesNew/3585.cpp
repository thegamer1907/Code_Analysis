#include <bits/stdc++.h>

using namespace std;

int main() {

	int n,m;
	cin>>n;
	cin>>m;
	vector<int> v;
	v.clear();

	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	int maxi = v[n-1]+m;

	for(int i=0;i<n-1;i++)
	{
		if(m<=0)
			break;
		m -= (v[n-1]-v[i]);
		v[i] = v[n-1];
		
	}
	int mini;
	if(m<=0)
	{
		mini = v[n-1];
	}
	else
	{
		if(m%n==0) 
		{
			mini = v[n-1]+(m/n);
		}
		else
		{
			mini = v[n-1]+(m/n)+1;
		}
	}
	cout<<mini<<" "<<maxi<<endl;
	return 0;
}