#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin>>n;
	int a1[n];
	for(int i=0;i<n;i++)
	cin>>a1[i];
	cin>>m;
	int a2[m];
	for(int i=0;i<m;i++)
	cin>>a2[i];
	sort(a1,a1+n);
	sort(a2,a2+m);
	int i=0;
	int j=0;
	int count=0;
	while(i<n && j<m)
	{
		if(a1[i]-a2[j]>=-1 && a1[i]-a2[j]<=1)
		{
			i++;
			j++;
			count++;
		}
		else
		{
			if(a2[j]<a1[i])
			j++;
			else
			i++;
		}
	}
	cout<<count;
	return 0;
}