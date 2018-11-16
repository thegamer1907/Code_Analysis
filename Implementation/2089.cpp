#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int a,b,c,n,i,j=0,k=0,l=0,m=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		k+=a;
		m+=b;
		l+=c;
	}
	if(k==0&&m==0&&l==0)
	{
		cout<<"YES"<<"\n";
	}
	else
	{
		cout<<"NO"<<"\n";
	}
	return 0;
}