#include <iostream>
#include <algorithm>
#include <deque>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n,m,k,r;
	long long  j = 0;
	long long count=0;
	long long M;
	cin>>n>>m>>k;

	long long K=k;

	std::vector<long long > v(m);
	for(int i = 0;i<m;i++)
		cin>>v[i];

	while(!v.empty())
	{
		if(v[0]>K && K%k>=v[0]%k)
			K=v[0] - v[0]%k + K%k;
		if(v[0]>K && K%k<v[0]%k)
			K=v[0] - v[0]%k + K%k + k;

		while(v[0]<=K && !v.empty())
			v.erase(v.begin()),j++;
		K+=j,count++,j=0;
	}
	cout<<count;
    return 0;
}