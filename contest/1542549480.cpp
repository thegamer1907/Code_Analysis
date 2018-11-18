#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define fi first
#define se second

typedef long long ll;
typedef unsigned long long ull;

// int n, t,i,j,c,w;
// string s, a;
int l,r;
double h,m,s,t1,t2,a,b,t;

int main(){
	scanf("%lf %lf %lf %lf %lf", &h, &m, &s, &t1, &t2);
	if(s)
		m+=0.1;
	if(m||s)
		h+=0.1;
	if(h>=12)
		h-=12;
	a=b=0;
	m/=5;
	s/=5;
	if(m>=12)
		m-=12;
	if(s>=12)
		s-=12;
	if(t1==12)
		t1=0;
	if(t2==12)
		t2=0;
	if(t1>t2){
		if(m>t1 )
			m-=12;
		if(s>t1 )
			s-=12;
		if(h>t1)
			h-=12;
	}
	t = t1>t2? t1-12:t1;
	l=r=0;
	if(m>t && m<t2)
		l++;
	else if(m!=t && m!=t2)
		r++;
	if(h>t && h<t2)
		l++;
	else if(h!=t && h!=t2)
		r++;
	if(s>t && s<t2)
		l++;
	else if(s!=t && s!=t2)
		r++;
	if(l&&r && t1!=t2)
		puts("NO");
	else
		puts("YES");
	return 0;
}