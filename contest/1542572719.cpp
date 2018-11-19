#include<bits/stdc++.h>
using namespace std;

int main()
{
	int h,m,s,t1,t2,z;
	cin>>h>>m>>s>>t1>>t2;
	h=h*60*60+m*60 + s;	
	m=(m*60+s)*12;	
	s=s*12*60;
	t1=t1*60*60;
	t2=t2*60*60;
	if (t1>t2)
	{
		z=t1;
		t1=t2;
		t2=z;
	}
	if (((h<=t2 && h>=t1) && (m<=t2 && m>=t1) && (s<=t2 && s>=t1))
		||((h<t1 ||  h>t2) && (m<t1 ||  m>t2) && (s<t1 || s>t2)))cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}