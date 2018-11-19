#include<algorithm>
#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<vector>
#include<cstdio>
#include<cmath>
#include<queue>
using namespace std;
inline const int Get_Int() {
	int num=0,bj=1;
	char x=getchar();
	while(x<'0'||x>'9') {
		if(x=='-')bj=-1;
		x=getchar();
	}
	while(x>='0'&&x<='9') {
		num=num*10+x-'0';
		x=getchar();
	}
	return num*bj;
}
struct Time {
	double v;
	int num;
	bool operator < (const Time& b) const {
		return v<b.v;
	}
} a[15];
double Hour,Minute,Second,t1,t2;
int main() {
	cin>>Hour>>Minute>>Second>>t1>>t2;
	Minute=Minute+Second/60;
	Hour=Hour+Minute/60;
	Hour/=12;
	if(Hour>=1)Hour-=1;
	Minute/=60;
	if(Minute>=1)Minute-=1;
	Second/=60;
	if(Second>=1)Second-=1;
	t1/=12;
	t2/=12;
	if(t1==1)t1=0;
	if(t2==1)t2=0;
	a[1].v=Hour,a[2].v=Minute,a[3].v=Second,a[4].v=t1,a[5].v=t2;
	a[1].num=1,a[2].num=2,a[3].num=3,a[4].num=4,a[5].num=5;
	sort(a+1,a+6);
	for(int i=1; i<5; i++)
		if((a[i].num==4&&a[i+1].num==5)||(a[i].num==5&&a[i+1].num==4)) {
			puts("YES");
			return 0;
		}
	if((a[1].num==4&&a[5].num==5)||(a[1].num==5&&a[5].num==4))puts("YES");
	else puts("NO");
	return 0;
}

