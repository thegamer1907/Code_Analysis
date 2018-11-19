#include <bits/stdc++.h>
using namespace std;

int main()
{
	int h,m,s,t1,t2;
	float hi,mi,si;
	cin>>h>>m>>s>>t1>>t2;
	si=s/5.0;
	mi=(m+(s/60.0))/5.0;
	hi=(h+(m/60.0)+(s/3600.0));
	if(hi>=12)
	    hi=hi-12;
	int temp;
	if(t1>t2)
	{
	    temp=t1;
	    t1=t2;
	    t2=temp;
	}
	if((hi>t1 && hi<t2) && (mi>t1 && mi<t2) && (si>t1 && si<t2))
	    cout<<"YES";
	else if(!(hi>t1 && hi<t2) && !(mi>t1 && mi<t2) && !(si>t1 && si<t2))
	    cout<<"YES";
	else
	    cout<<"NO";
	return 0;
}
