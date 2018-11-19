#include<cstdio>
#include<algorithm>
using namespace std;
int h,m,s,t1,t2;
int main()
{
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if(t1>t2)swap(t1,t2);
	bool f1,f2,f3;
	f1=(h>=t1&&h<t2);
	f2=(m>=t1*5&&m<t2*5);
	f3=(s>=t1*5&&s<t2*5);
	if(!f1&&!f2&&!f3)
	return puts("YES"),0;
	if(f1&&f2&&f3)
	return puts("YES"),0;
	puts("NO");
}