#include <bits/stdc++.h>
using namespace std;

int h,m,s,i,t1,t2,ok,a[5];
int main(int argc,char *argv[]){
	cin>>h>>m>>s>>t1>>t2;
	h%=12;t1%=12;t2%=12;
	m=m*60+s;
	h=h*3600+m;
	t1*=3600;
	t2*=3600;
	s*=60*12;
	m*=12;
	a[0]=h;a[1]=m;a[2]=s;a[3]=t1;a[4]=t2;
	//printf("%d,%d,%d,%d,%d\n",h,m,s,t1,t2);
	sort(a,a+5);
	for(i=0;i<5;++i)
		if((a[i]==t1&&a[(i+1)%5]==t2)||
		  (a[i]==t2&&a[(i+1)%5]==t1)) ok=1;
	printf("%s\n",ok?"YES":"NO");
	return 0;
}
