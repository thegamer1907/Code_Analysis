#include <iostream>
using namespace std;
double max(double &a,double &b)
{
	if (a>b)
	return a;
	else
	return b;
}
double min(double &a,double &b)
{
	if (a<b)
	return a;
	else
	return b;
}
int main()
{
	int count2=0,count3=0;
	double minn,maxn;
	double h,m,s;
	double st,en;
	scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&st,&en);
	double s_an;
	double m_an;
	double h_an;
	double st_an,en_an;
	if (h==12)
	h=0;
	if (st==12)
	st=0;
	if (en==12)
	en=0;
	s_an=6*s;
	m_an=(s+60*m)/10;
	h_an=(m_an+360*h)/12;
	st_an=30*st;
	en_an=30*en;
	minn=min(st_an,en_an);
	maxn=max(st_an,en_an);
    if (s_an<maxn&&s_an>minn)
    count2++;
    if (m_an<maxn&&m_an>minn)
    count2++;
    if (h_an<maxn&&h_an>minn)
    count2++;
    if (s_an>maxn||s_an<minn)
    count3++;
    if (m_an>maxn||m_an<minn)
    count3++;
    if (h_an>maxn||h_an<minn)
    count3++;
    if (count3==3||count2==3)
    cout<<"YES\n"<<endl;
    else
    cout<<"NO\n"<<endl;
	return 0; 
}
