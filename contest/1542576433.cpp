#include<bits/stdc++.h>
using namespace std;

int n;
char a1,a2,t1,t2;
bool p1,p2;

int main()
{
	scanf("%c%c\n",&a1,&a2);
	scanf("%d\n",&n);
	for(int i=1;i<=n;++i)
	{
		scanf("%c%c\n",&t1,&t2);
		if(t1==a1&&t2==a2)
		  {printf("YES");return 0;}
		if(t1==a2) p2=1;
		if(t2==a1) p1=1;
		if(p1&&p2)
		  {printf("YES");return 0;}
	}
	printf("NO");
	return 0;
}