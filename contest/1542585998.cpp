#include<bits/stdc++.h>
using namespace std;
double h,m,s,t1,t2;
bool q1,q2;
int main(){
	scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2);
	m=m*60+s;
	h=h*60*60+m;
	s/=60.0;
	m/=3600.0;
	h/=12*3600.0;
	t1/=12.0;
	t2/=12.0;
	while(m>1)m-=1;
	while(h>1)h-=1;
	while(t1>1)t1-=1;
	while(t2>1)t2-=1;
	if(t1>t2)swap(t1,t2);
	q1=q2=0;
	if(t1<h&&h<t2)q1=1;else q2=1;
	if(t1<m&&m<t2)q1=1;else q2=1;
	if(t1<s&&s<t2)q1=1;else q2=1;
	if((q1==0)||(q2==0))puts("YES");else puts("NO");
	return 0;
}
