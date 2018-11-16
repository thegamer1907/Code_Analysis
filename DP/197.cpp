#include<bits/stdc++.h>
using namespace std;

int dp[200][200];

int cntmax(int *arr1,int *arr2,int i,int j,int n,int m){
	if(i==n || j==m) return 0;

	if(dp[i][j]!=-1) return dp[i][j];
	int ans = INT_MIN;
	if(abs(arr1[i]-arr2[j])<=1){
		ans = 1+ cntmax(arr1,arr2,i+1,j+1,n,m);
	}
	else{
		ans = max(ans,max(cntmax(arr1,arr2,i+1,j,n,m),cntmax(arr1,arr2,i,j+1,n,m)));
	}
	return dp[i][j]=ans;
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int *arr1 =  new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr1[i];
	}
	int m;
	cin>>m;
	int *arr2 = new int[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>arr2[i];
	}
	sort(arr1,arr1+n);
	sort(arr2,arr2+m);
	memset(dp,-1,sizeof(dp));
	cout<<cntmax(arr1,arr2,0,0,n,m);
	return 0;
}