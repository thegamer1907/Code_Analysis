//    >File Name: 438B.cpp
//    > Author: Webwei

#include<bits/stdc++.h>
using namespace std;

bool cmp(double p,double q,double w){
	return q<p && p<w;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	double h, m ,s ,t1 ,t2;
	cin >> h >> m >> s >> t1 >> t2;
	if(h==12)	h=0;
	double hh=0.0,mm=0.0,ss=0.0;
	h = h +m/60 + s/3600;
	m = (m + s/3600)/5;
	s/=5;
	hh=h+12;mm=m+12;ss=s+12;
	if(t1==12)	t1=0;
	if(t1>t2)	swap(t1,t2);
	if(!cmp(h,t1,t2)&&!cmp(m,t1,t2)&&!cmp(s,t1,t2)&&!cmp(hh,t1,t2)&&!cmp(ss,t1,t2)&&!cmp(mm,t1,t2)){
		cout<<"YES\n";
		return 0;
	}
	swap(t1,t2);t2+=12;
	if(!cmp(h,t1,t2)&&!cmp(m,t1,t2)&&!cmp(s,t1,t2)&&!cmp(hh,t1,t2)&&!cmp(ss,t1,t2)&&!cmp(mm,t1,t2)){
		cout<<"YES\n";
		return 0;
	}
	cout<<"NO\n";
	return 0;
}
