#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	double h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	double ph,pm,ps,pt1,pt2;
	if(h==12)h=0;
	if(t1==12)t1=0;
	if(t2==12)t2=0;
	ph=(h)*30+(m+s/60)/2;
	pm=m*6+s/60*6;
	ps=s*6;
	pt1=(t1)*30;
	pt2=(t2)*30;
	if(pt1>pt2)
	{
		double tmp=pt1;
		pt1=pt2;
		pt2=tmp;
	}
	if(ph>pt1&&ph<pt2&&pm>pt1&&pm<pt2&&ps>pt1&&ps<pt2)
	{
		cout<<"YES"<<endl;
		
	}
	else if((ph<pt1||ph>pt2)&&(pm<pt1||pm>pt2)&&(ps<pt1||ps>pt2))
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
 } 