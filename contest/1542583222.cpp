#include<iostream>
using namespace std;

int main()
{
	int h,m,s,t1,t2,ls,lm;
	cin>>h>>m>>s>>t1>>t2;
	bool pos = false;
	if(t1>t2)
	{
		t1 = t1+t2;
		t2 = t1-t2;
		t1 = t1-t2;
	}
	ls = s/5;
	if((t1<=ls&&t2<=ls)||(t1>ls&&t2>ls))
	{
		lm = m/5;
		if((lm>=t1&&lm<t2)||(h>=t1&&h<t2))
		{
			pos = false;
		}
		else
		{
			pos = true;
		}
	}
	else
	{
		lm = m/5;
		if((lm>=t1&&lm<t2)&&(h>=t1&&h<t2))
		{
			pos = true;
		}
		else
		{
			pos = false;
		}
	}
	
	if(pos)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}