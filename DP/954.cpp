#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,val=0,maxi=0,p=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		val+=x;
		if(!x)p++;
		else if(p>0)p--;
		maxi=max(maxi,p);
	}
	if(!maxi)maxi--;
	cout<<val+maxi;
	return 0;
}