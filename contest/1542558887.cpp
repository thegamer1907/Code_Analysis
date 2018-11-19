#include <bits/stdc++.h>

using namespace std;

int main()
{
	int h,m,s;
	cin>>h>>m>>s;
	if(h==12)
		h=0;
	m/=5;
	s/=5;
	int t1,t2;
	cin>>t1>>t2;
	if(t1>t2)
		swap(t1,t2);
	bool p_ch=true,pr_ch=true;
	
	if(h>=t1 && h<t2)
	{
		p_ch=false;
	}
	else pr_ch=false;
	
	if(m>=t1 && m<t2)
	{
		p_ch=false;
	}
	else pr_ch=false;
	
	if(s>=t1 && s<t2)
	{
		p_ch=false;
	}
	else pr_ch=false;
	
	if(p_ch || pr_ch)
		cout<<"YES";
	else cout<<"NO";
	
	return 0;
}