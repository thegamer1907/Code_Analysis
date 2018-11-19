#include<cstdio>
#include<algorithm> 
#include<cstring>
#define LL long long
using namespace std;
int T[4],t1,t2;
double t[4]; 
int read()
{
	int x=0,f=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9'){x=x*10+c-'0';c=getchar();}
	return x*f;
}
int main()
{
	for(int i=1;i<=3;i++)T[i]=read();
	t1=read();t2=read();t1*=5;t2*=5;
	t[3]=T[3];
	t[2]=T[2]+1.0*T[3]/60;
	t[1]=T[1]*5+t[2]/60;
	if(t[1]>60)t[1]-=60;
//	printf("%.6lf %.6lf %.6lf\n",t[1],t[2],t[3]);
	sort(t+1,t+4);
	if(t1>t[1]&&t1<t[2]&&t2>t[1]&&t2<t[2]){printf("YES");return 0;}
	if(t1>t[2]&&t1<t[3]&&t2>t[2]&&t2<t[3]){printf("YES");return 0;}
	if((t1>t[3]||t1<t[1])&&(t2>t[3]||t2<t[1])){printf("YES");return 0;}
	printf("NO");
	return 0;
}
