#include <bits/stdc++.h>
using namespace std;

#define rep(i,s,t) for(int i=s,i##end=t;i<=i##end;++i)
#define per(i,s,t) for(int i=t,i##end=s;i>=i##end;--i)
#define repo(i,s,t) for(int i=s,i##end=t;i<i##end;++i)


int main() {
	double h,m,s;
	cin>>h>>m>>s;
	double t1,t2;
	cin>>t1>>t2;
	h+=m/60+s/3600;
	m+=s/60;
	
	h*=5;
	t1*=5;
	t2*=5;
	
	double A[10];
	A[1]=h,A[2]=m,A[3]=s;
	sort(A+1,A+4);

	bool chk=false;
	rep (i,1,2) {
		double l=A[i],r=A[i+1];
		if (l<=t1&&t1<=r&&l<=t2&&t2<=r) chk=true;
	}
	if ((t1>=A[3]||t1<=A[1])&&(t2>=A[3]||t2<=A[1])) chk=true;
	
	if (chk) puts("YES");
	else puts("NO");

	return 0;
}