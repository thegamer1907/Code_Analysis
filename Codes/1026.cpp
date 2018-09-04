#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
	int n,k,i,j;
	cin>>n>>k;
	string s;
	cin>>s;
	vector<int> prea;
	vector<int> preb;
	prea.resize(n+1);
	preb.resize(n+1);
	for(i=1;i<=n;i++)
	{
		prea[i]=prea[i-1];
		preb[i]=preb[i-1];
		if(s[i-1]=='a')
			prea[i]++;
		else
			preb[i]++;
	}
	int ans = 0;
	int curlen = 0;
	int start = 1;
	int end = k;
	for(end=k;end<=n;end++)
	{
		if(end>=start)
		{
			curlen = end - start + 1;
			int a = prea[end]-prea[start-1];
			int nd = curlen - a;
			if(nd<=k)
				ans = max(ans,curlen);
			else
				start++;
		}
	}
	start = 1;
	for(end=k;end<=n;end++)
	{
		if(end>=start)
		{
			curlen = end - start + 1;
			int a = preb[end]-preb[start-1];
			int nd = curlen - a;
			if(nd<=k)
				ans = max(ans,curlen);
			else
				start++;
		}
	}
	cout<<ans<<endl;
	return 0;
}