#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int a[10],t1,t2;
double b[10];

int main(){
	cin>>a[1]>>a[2]>>a[3]>>t1>>t2;
	a[4]=t1; a[5]=t2;
	b[3]=a[3]/5+(a[3]%5?0.1:0); b[2]=a[2]/5+(a[2]%5?0.1:0); b[1]=a[1]; b[4]=t1; b[5]=t2;
	if(a[3]) b[2]+=0.1;
	if(a[3] || a[2]) b[1]+=0.1;
	sort(b+1,b+1+5);
	for(int i=1;i<=5;i++)
		if(fabs(b[i]-t1)<1e-7) {
			t1=i; break;
		}
	for(int i=1;i<=5;i++)
		if(fabs(b[i]-t2)<1e-7) {
			t2=i; break;
		}
	if(t1<t2) swap(t1,t2);
	if((t1==5 && t2==1) || (t2+1==t1)) puts("YES");
	else puts("NO");
	return 0;
}