#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	double ts=s*360/60;
	double tm=m*360/60+ts/360*6;
	double th=h*360/12+tm/360*30;
	if(th>=360)
		th-=360;
	double tt1=t1*360/12,tt2=t2*360/12;
	if(tt1==360)
		tt1-=360;
	if(tt2==360)
		tt2-=360;
	if(tt1>tt2)
	{
		int f=0;
		if(ts<tt1&&ts>tt2)
			f++;
		if(tm<tt1&&tm>tt2)
			f++;
		if(th<tt1&&th>tt2)
			f++;
		if(f==3||f==0)
			puts("YES");
		else
			puts("NO");
	}
	else
	{
		swap(tt1,tt2);
		int f=0;
		if(ts<tt1&&ts>tt2)
			f++;
		if(tm<tt1&&tm>tt2)
			f++;
		if(th<tt1&&th>tt2)
			f++;
		if(f==3||f==0)
			puts("YES");
		else
			puts("NO");
	}
	
}