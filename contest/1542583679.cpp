#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define P 1000000007
inline void Rd(int &res){
	char c;res=0;
	while(c=getchar(),!isdigit(c));
	do res=(res<<3)+(res<<1)+(c^48);
	while(c=getchar(),isdigit(c));
}
int main(){	
	double h,m,s,t1,t2,f=0;
	scanf("%lf %lf %lf %lf %lf",&h,&m,&s,&t1,&t2);
	h+=m/60+s/3600;
	m+=s/60;
	m/=5;
	s/=5;
	if(h>m)swap(h,m);
	if(h>s)swap(h,s);
	if(m>s)swap(m,s);
	if(t1>=h&&t1<=m&&t2>=h&&t2<=m)f=1;
	if(t1>=m&&t1<=s&&t2>=m&&t2<=s)f=1;
	if((t1>=s||t1<=h)&&(t2>=s||t2<=h))f=1;
	if(f)puts("YES");
	else puts("NO");
	return 0;
}
