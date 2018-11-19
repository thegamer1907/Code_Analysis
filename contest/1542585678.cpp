#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int h,m,s;
int t1,t2;
int shi,fen,miao;
int t[100];

int gi()
{
	int x=0,w=1;char ch=getchar();
	while ((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if (ch=='-') w=-1,ch=getchar();
	while (ch>='0'&&ch<='9')
	{
		x=(x<<3)+(x<<1)+ch-'0';
		ch=getchar();
	}
	return x*w;
}

int main()
{
	h=gi();m=gi();s=gi();t1=gi();t2=gi();
	if (h==12) h=0;
	shi=h*3600+m*60+s;
	fen=12*(m*60+s);
	miao=720*s;
	t1*=3600;t2*=3600;
	t[1]=shi;t[2]=fen;t[3]=miao;t[4]=t1;t[5]=t2;
	sort(t+1,t+5+1);
	t[0]=t[5];t[6]=t[1];
	for (int i=1;i<=5;i++)
	{
		if (t[i]==t1)
		{
			if (t[i-1]==t2||t[i+1]==t2) {printf("YES");return 0;}
		}
	}
	printf("NO");
	return 0;
}
