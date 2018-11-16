#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,c1=0,c2=0,c3=0,n,a[100],b[100],c[100];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i]>>b[i]>>c[i];
	for(i=0;i<n;i++)
	{
		c1+=a[i];
		c2+=b[i];
		c3+=c[i];
	}
	if(c1==0 && c2==0 && c3==0) cout<<"YES";
	else cout<<"NO";
	return 0;	
}