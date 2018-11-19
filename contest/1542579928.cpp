#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h, m, s, t1, t2, count=0, c1=0, c2=0, c3=0;
	cin>>h>>m>>s>>t1>>t2;
	int maxim = max(t1*5, t2*5);
	int minim = min(t1*5, t2*5);
	for(int i=minim;i<maxim;i++)
	{
		int hrs = i/5;
		if(hrs==0)
		{
			hrs=12;
		}
		if(hrs==h)
		{
			c1=1;
		}
		if(m==i)
		{
			c2=1;
		} 
		if(s==i)
		{
			c3=1;
        }	 	
	}
	if(c1+c2+c3==0 || (c1>=1 && c2>=1 && c3>=1))
	{
		cout<<"YES";
	}	
	else
	{
		cout<<"NO";
	}
}