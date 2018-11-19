#include <cstdio>
#include <iostream>
using namespace std;
#define ref(i,x,y)for(int i=x;i<=y;++i)
int h,m,s,t1,t2;
int s1,s2,s3,a1,a2;
int main()
{
	cin>>h>>m>>s>>t1>>t2;
	s1=3600*(h%12)+60*m+s;
	s2=720*m+12*s;
	s3=720*s;
	a1=3600*(t1%12);
	a2=3600*(t2%12);
	if(s1>s2)swap(s1,s2);
	if(s2>s3)swap(s2,s3);
	if(s1>s2)swap(s1,s2);
	if(a1>a2)swap(a1,a2);
	bool flag=0;
	if(s1<=a1&&a2<=s2||
		s2<=a1&&a2<=s3)flag=1;
	if(a2<=s1||a1>=s3)flag=1;
	if(a1<=s1&&a2>=s3)flag=1;
	if(flag)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}