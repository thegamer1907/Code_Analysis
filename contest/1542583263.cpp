#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
double h,m,s,t1,t2;
int isin(double a,double b,double x){
	return a<=x&&x<=b;
}
int main(){
	cin>>h>>m>>s>>t1>>t2;
	m=m/5+s/300,s=s/5,h=h+m/60;
	if(h>12)h-=12;if(m>12)m-=12;
	if(t1>t2)swap(t1,t2);
	if(!isin(t1,t2,h)&&!isin(t1,t2,m)&&!isin(t1,t2,s))cout<<"YES";
	else if(!isin(t2,12,h)&&!isin(t2,12,m)&&!isin(t2,12,s)&&
			!isin(0,t1,h) &&!isin(0,t1,m) &&!isin(0,t1,s) )
		cout<<"YES";
	else cout<<"NO";
	return 0;
}
