#include<cstdio>
#include<iostream>
using namespace std;
bool mm,hm;
struct hd
{
	int pt,d;
	bool operator == (const hd &oth) const
	{
		return pt==oth.pt && d==oth.d;
	}
	bool operator < (const hd & oth) const
	{
		return pt<oth.pt || (pt==oth.pt && d<oth.d);
	}
}h,m,s,t1,t2,h2,h0;
int main()
{
	cin>>h.pt>>m.pt>>s.pt>>t1.pt>>t2.pt;
	h.pt*=5; t1.pt*=5; t2.pt*=5;
	h.pt%=60;
	//t1.pt%=60; t2.pt%=60;
	if(s.pt>0) m.d=1;
	if(m.pt>0 || m.d) h.d=1;
	if(m<h) swap(m,h);
	if(s<h) swap(s,h);
	if(s<m) swap(s,m);
	//h2.pt=h.pt+60; h2.d=h.d;
	//h0.pt=s.pt-60; h0.d=s.d;
	bool ok=false;
	//if(h0<t1 && t1<h && h0<t2 && t2<h) ok=true;
	if((t1<h || s<t1) && (t2<h || s<t2)) ok=true;
	if(h<t1 && t1<m && h<t2 && t2<m) ok=true;
	if(m<t1 && t1<s && m<t2 && t2<s) ok=true;
	//if(s<t1 && t1<h2 && s<t2 && t2<h2) ok=true;
	printf(ok?"yes\n":"no\n");
	return 0;
}
