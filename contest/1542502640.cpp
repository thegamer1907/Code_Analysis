#include <bits/stdc++.h>
using namespace std;
int h,m,s,t1,t2;
bool canwalk(int p,int q,int w) {
	if (q<p) q+=3600*12;
	if (w<p) w+=3600*12;
	return w>q;
}
int main() {
	cin>>h>>m>>s>>t1>>t2;
	h*=3600, m*=3600, s*=3600;
	h=h+m/60+s/3600;
	m=(m+s/60)/5;
	s=s/5;
	h%=3600*12; m%=3600*12; s%=3600*12;
	t1=t1%12*3600,t2=t2%12*3600;
	if (canwalk(t1,t2,h)&&canwalk(t1,t2,m)&&canwalk(t1,t2,s)) puts("YES");
	else {
		swap(t1,t2);
		if (canwalk(t1,t2,h)&&canwalk(t1,t2,m)&&canwalk(t1,t2,s)) puts("YES");
		else puts("NO");
	} 
}