#include<cstdio>
#include<algorithm>
using namespace std;
//const int N=;
struct data{
	int d,id;
	friend bool operator <(data a,data b)
	{
		return a.d<b.d;
	}
}a[6];
int h,m,s,t1,t2;

int main()
{
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	a[1].d=h*3600+m*60+s;
	a[2].d=m*720+s*12;
	a[3].d=s*720;
	a[1].id=a[2].id=a[3].id=1;
	a[4].d=t1*30*120,a[5].d=t2*30*120;
	a[4].id=a[5].id=2;
	sort(a+1,a+1+5);
	for(int i=2;i<=5;++i)
	{
		if(a[i].id==a[i-1].id&&a[i].id==2)	
		{
			puts("YES");
			return 0;
		}
	}
	if(a[1].id==2&&a[5].id==2)	puts("YES");
	else	puts("NO");
	return 0;
}
		
