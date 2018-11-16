#include<bits/stdc++.h>
using namespace std;
int a,b,c,ans;
int main()
{
	cin>>a>>b>>c;
	if(a==1)
		b++;
	if(c==1)
		b++;
	if(b==1)
	{
		if(a<c)
			a++;
		else
			c++;
	}
	cout<<a*b*c;
	return 0;
}