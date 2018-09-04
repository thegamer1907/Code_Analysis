#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
	if(!n)return 0;
	return solve(n/10)+n%10;
}
int main()
{
	int n;
	cin>>n;
	int ans=0;
	for(int i=0;i<n;i++,ans++)
		while(solve(ans)-10)ans++;
	cout<<ans-1;
}