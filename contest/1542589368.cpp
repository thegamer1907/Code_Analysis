#include<bits/stdc++.h>
using namespace std;

#define DEBUG

#ifndef TZNLOCAL
#undef DEBUG
#endif

#ifdef DEBUG
#define debug(...) fprintf(stderr,__VA_ARGS__)
#else
#define debug(...) ;
#endif

int main()
{
	int x,y,z,a,b;
	cin>>x>>y>>z>>a>>b;
	if (a==12) a=0;
	if (b==12) b=0;
	int p1,p2,p3,p4,p5;
	p1=120*30*x+120/2*y+120/120*z;
	p2=120*6*y+120/10*z;
	p3=120*6*z;
	p4=120*30*a;
	p5=120*30*b;
	p1%=43200;
	p2%=43200;
	p3%=43200;
	p4%=43200;
	p5%=43200;
	vector<int> p;
	p.push_back(p1);
	p.push_back(p2);
	p.push_back(p3);
	p.push_back(p4);
	p.push_back(p5);
	sort(p.begin(),p.end());
	p.push_back(p[0]);
	for(int i=0;i<=5;i++)
	{
		if ((p[i]==p4 && p[i+1]==p5) || (p[i]==p5 && p[i+1]==p4))
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
