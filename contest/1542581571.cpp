#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	if(h==12)
		h=0;
	if(t1==12)
		t1=0;
	if(t2==12)
		t2=0;
	h=3600*h+60*m+s;
	m=720*m+12*s;
	s=720*s;
	t1=t1*3600;
	t2=t2*3600;
	//cout<<h<<" "<<m<<" "<<s<<endl;
	if(t1>t2)
		swap(t1,t2);
	int cnt1=0,cnt2=0;
	for(int i=t1;i<=t2;i++)
	{
		if(i==h)
			cnt1++;
		if(i==m)
			cnt1++;
		if(i==s)
			cnt1++;
	}
	for(int i=t1;i>=0;i--)
	{
		if(i==h)
			cnt2++;
		if(i==m)
			cnt2++;
		if(i==s)
			cnt2++;
	}
	for(int i=t2;i<432000;i++)
	{
		if(i==h)
			cnt2++;
		if(i==m)
			cnt2++;
		if(i==s)
			cnt2++;
	}
	if(cnt1==0||cnt2==0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
