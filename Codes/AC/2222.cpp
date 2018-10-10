#include<bits/stdc++.h>
using namespace std;
long long s1,s2,n,a[200001],r,l,s;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	l=n;
	r=-1;
	while(r<l)
	{
		if(s1==s2)
		{
			s=s1;
			r++;
			s1+=a[r];
			l--;
			s2+=a[l];
		}
		else if(s1<s2)
		{
			r++;
			s1+=a[r];
		}
		else
		{
			l--;
			s2+=a[l];
		}
	}
	cout<<s;
	return 0;
}