#include<stdio.h>
#include<cstring>
#define go(i,a,b) for(int i=a;i<=b;i++)
const int N=102;
int n;
char c[5],s[N][5];
int main()
{
	
	
	scanf("%s %d",c,&n);
	go(i,1,n)
	{
		scanf("%s",s[i]);
		if(s[i][0]==c[0]&&s[i][1]==c[1])
		{
			puts("YES");return 0;
		}
	}
	go(i,1,n)go(j,1,n)
	{
		if(s[i][1]==c[0]&&s[j][0]==c[1])
		{
			puts("YES");return 0;
		}
	}
	puts("NO");
	return 0;
}//Paul_Guderian

