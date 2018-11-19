#include <bits/stdc++.h>

using namespace std;

int h,m,s,a,b;
int p1,p2,p3,p4,p5;

bool bet(int f,int g,int p)
{
	int k=max(f,p),l=min(f,p);
	f=l;
	p=k;
	if (f<=g && g<=p) return true;
	return false;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	cin>>h>>m>>s>>a>>b;
	if (h==12) h=0;
	if (a==12) a=0;
	if (b==12) b=0;
	p1=h*3600+m*60+s;
	p2=m*720+s*6;
	p3=s*720;
	p4=a*3600;
	p5=b*3600;
	//cout<<p1<<' '<<p2<<' '<<p3<<' '<<p4<<' '<<p5<<endl;
	if (!bet(p4,p1,p5) && !bet(p4,p2,p5) && !bet(p4,p3,p5))
	{
		cout<<"YES"<<endl;
		return 0;
	}
	/*if (p4>p5) p5+=3600*12;
	else p4+=3600*12;*/
	//cout<<p1<<' '<<p2<<' '<<p3<<' '<<p4<<' '<<p5<<endl;
	if (!bet(0,p1,min(p4,p5)) && !bet(max(p4,p5),p1,3600*12) && !bet(0,p2,min(p4,p5)) && !bet(max(p4,p5),p2,3600*12) && !bet(0,p3,min(p4,p5)) && !bet(max(p4,p5),p3,3600*12))
	{
		cout<<"YES"<<endl;
		return 0;
	}
	cout<<"NO"<<endl;
}

