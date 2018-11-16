#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,target;
	cin>>n>>target;
	int jumps[n-1];
	int curr = 1;
	for(int i=0; i<n-1; ++i) cin>>jumps[i];	
	while(curr < target)
	{
		curr += jumps[curr-1];
	}
	if(curr == target) cout <<"YES\n";
	else cout <<"NO\n";
}