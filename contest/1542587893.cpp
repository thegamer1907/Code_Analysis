#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int read()
{
	char ch=getchar();int f=0;
	while(ch<'0'||ch>'9')ch=getchar();
	while(ch>='0'&&ch<='9'){f=(f<<1)+(f<<3)+ch-'0';ch=getchar();}
	return f;
}
int main()
{
	double h=read(),m=read(),s=read();
	double s1=read()*30,s2=read()*30;
	double cs=6*s;
	double cm=6*m+s/10.0;
	if(h==12) h=0;
	double ch=h*30+m/2.0+s/120.0;
	if((((cs>=s1&&cs<=s2)||(cm>=s1&&cm<=s2)||(ch>=s1&&ch<=s2))&&s1<=s2)||(s1>s2&&(((cs>=s1&&cs<=360)||(cs>=0&&cs<=s2))||((cm>=s1&&cm<=360)||(cm>=0&&cm<=s2))||((ch>=s1&&ch<=360)||(ch>=0&&ch<=s2)))))
	{
		swap(s1,s2);
		if((((cs>=s1&&cs<=s2)||(cm>=s1&&cm<=s2)||(ch>=s1&&ch<=s2))&&s1<=s2)||(s1>s2&&(((cs>=s1&&cs<=360)||(cs>=0&&cs<=s2))||((cm>=s1&&cm<=360)||(cm>=0&&cm<=s2))||((ch>=s1&&ch<=360)||(ch>=0&&ch<=s2)))))
		{
			printf("NO");
		}
		else printf("YES");
	}

	else 
	printf("YES");
}