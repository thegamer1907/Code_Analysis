#include<bits/stdc++.h>
using namespace std;
int main()
{
	double h,m,s,t1,t2;
	scanf("%lf %lf %lf %lf %lf",&h,&m,&s,&t1,&t2);
	h=h*30+m/2+s/120;
	m=m*6+s/10;
	s=s*6;
	t1*=30;
	t2*=30;
	if(t1>t2){
		if(h<t2)
			h+=360;
		if(m<t2)
			m+=360;
		if(s<t2)
			s+=360;
		t2+=360;
	}
	int cnt=0;
	if(t1<h&&h<t2) cnt++;
	if(t1<m&&m<t2) cnt++;
	if(t1<s&&s<t2) cnt++;
	if(cnt==0||cnt==3) printf("YES");
	else printf("NO");
	return 0;
}
