#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[2],t[2];
	int n;
	int flag=0,flag1=0,flag2=0;
	scanf("%c%c",&a[0],&a[1]);
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		scanf("%c%c",&t[0],&t[1]);
		getchar();
		if(a[0]==t[1])
			flag1=1;
		if(a[1]==t[0])
			flag2=1;
		if((a[0]==t[0]&&a[1]==t[1])||(flag1&&flag2))
			flag=1;
	}
	if(flag)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
