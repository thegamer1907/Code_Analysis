#include<bits/stdc++.h>
using namespace std;
int a[200];

priority_queue<int,vector<int>,greater<int> > q;
int main()
{
	int n,m,x;
	cin >> n >> m;
	int maxn=0; 
	for(int i=0;i<n;i++){
		cin >> x;	
		maxn = max(maxn,x);
		q.push(x);
	}
	
	for(int i=0;i<m;i++)
	{
		int top = q.top();
		q.pop();
		q.push(top+1);
	}
	int ans=0;
	for(int i=0;i< n;i++)
	{
		ans = max(q.top(),ans);
		q.pop();
	}
	cout << ans << " " << maxn+m << endl; 
	 
} 