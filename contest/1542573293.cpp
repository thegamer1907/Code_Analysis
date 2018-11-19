#include<bits/stdc++.h>
using namespace std;
bool first(string pass,string ar[],int n)
{
	int a=0,b=0,c=0;
	for(int i=0;i<n;i++)
	{
		if(pass[0]==ar[i][1])
			a=1;
		if(pass[1]==ar[i][0])
			b=1;
		if(!pass.compare(ar[i]))
			c=1;
	}
	if(c==1||(a==1&&b==1))
		return true;
	else
		return false;
}
int main()
{
	int n;
	string pass;
	cin>>pass>>n;
	string sub[n];
	for(int i=0;i<n;i++)
	{
		cin>>sub[i];
	}
	if(first(pass,sub,n))
		cout<<"YES"<<endl;
	else
		cout<<"NO";
	
}
