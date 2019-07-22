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
	long long a;
	long long K=k;

	std::list<long long > v;
	std::list<long long >::iterator it;
	for(int i = 0;i<m;i++)
		cin>>a,v.push_back(a);

	while(!v.empty())
	{
		it = v.begin();
		if(*it>K && K%k>=*it%k)
			K=*it - *it%k + K%k;
		if(*it>K && K%k<*it%k)
			K=*it - *it%k + K%k + k;

		while(*it<=K && !v.empty())
			v.pop_front(),j++,it=v.begin();
		K+=j,count++,j=0;
	}
	cout<<count;
    return 0;
}