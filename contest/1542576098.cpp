#include<cstdio>
#include<algorithm>
#include<iostream> 
#include<cmath>
using namespace std;
int h_,m,s,t1,t2;
double h[3];
int l1,l2,l3,r1,r2,r3;
int main()
{
	scanf("%d%d%d%d%d",&h_,&m,&s,&t1,&t2);
	if (m!=0||s!=0) h[0]=1.0*h_+0.5;
	else h[0]=h_;
	if (s!=0)
	{
		h[1]=1.0*m/5;
		
		int _h=h[1];
		if (abs((_h*5)-1.0*m)<=1e-9) h[1]+=0.5;
	//	cout<<h[1]<<endl;
	}
	else h[1]=1.0*m/5;
	h[2]=1.0*s/5;
	if (t1>t2) swap(t1,t2);
	sort(h,h+3); 
//	cout<<h[0]<<" "<<h[1]<<" "<<h[2]<<endl;
	if ((h[0]<t1&& t1<h[1] && h[0]<t2 && t2<h[1])||(h[1]<t1 && t1<h[2] && h[1]<t2 && t2<h[2])) {printf("YES");return 0;}
	if ((t1<h[0] && t2>h[2])||(t2<h[0] && t1>h[2])||(t1<h[0] && t2<h[0])||(t1>h[2] && t2>h[2])) {printf("YES");return 0;}
	printf("NO");
}
