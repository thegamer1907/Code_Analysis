#include<bits/stdc++.h>
using namespace std;
int n,m[500001],k;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
 	cin>>m[i];
	sort(m,m+n);
	for(int i=0;i<n;i++) 
 	if(m[i]>=2*m[k]) 
  	k++;
	cout<<n-min(n/2,k);
	return 0;
}