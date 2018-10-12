#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int main(void)
{
	vector<int> v;
	v.push_back(0);
	int n,t;
	scanf("%d %d",&n,&t);
	for(int i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		v.push_back(v.back()+x);
	}
	vector<int>::iterator it;
	int mx = 0;
	for(it = v.begin();it!=v.end();it++)
	{
		int x = upper_bound(it,v.end(),t+*it)-it-1;
		mx = max(mx,x);
	}
	cout<<mx;
}