#include <bits/stdc++.h> 
typedef long long ll;
using namespace std;
int n,m,i,a[500000];
int main()
{	
	cin>>n>>m;
	for(i=0;i<n-1;i++)
		cin>>a[i];
	m--;
	i=0;
	while(i<m)
	   i+=a[i];
	if(i==m)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}