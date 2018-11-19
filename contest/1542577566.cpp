#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[123456],tmp[123456];
int Left,Right;
ll res,dp[23][123456];
ll gao(int l, int r)
{
	while(Left<l)
	{
		--tmp[a[Left]];
		res-=tmp[a[Left]];
		++Left;
	}
	while(Left>l)
	{
		--Left;
		res+=tmp[a[Left]];
		++tmp[a[Left]];
	}
	while(Right<r)
	{
		res+=tmp[a[Right]];
		++tmp[a[Right]];
		++Right;
	}
	while (Right>r)
	{
		--Right;
		--tmp[a[Right]];
		res-=tmp[a[Right]];
	}
//	cout<<"res="<<endl;
	return res;
}
void solve(int l,int r,int _left,int _right,int val)
{
	if (l>r)return;
	int mid=(l+r)>>1;
	int M=mid;
	dp[val+1][mid]=dp[val][mid];
	for (int _=_left; _< mid && _ <= _right;_++)
	{
		ll Max=gao(_, mid) + dp[val][_];
		if (dp[val+1][mid]>Max)
		{
			dp[val+1][mid]=Max;
			M=_;
		}
	}
	solve(l,mid-1,_left,M,val);
	solve(mid+1,r,M,_right,val);
}
int n,m;
int main()
{
	scanf("%d%d",&n,&m);
	for(int _=0;_<n;_++){
		cin>>a[_];
	}
	dp[0][0]=0;
	for (int _=1;_<=n;_++){
		dp[0][_]=1000000000000000000;
	}
	for (int _=0;_<m;_++){
		solve(0,n,0,n,_);
	}
	cout<<dp[m][n]<<endl;
	return 0;
}