#include<bits/stdc++.h>
const int N=505;
using namespace std;
char s[N][2],a[50],b[50];
int n;
int main()
{
	scanf("%s",&a);
	a[2]=a[1];a[1]=a[0];
	scanf("%d",&n);
	for(int i=1;i<=n;++i) scanf("%s",&s[i]);
	int flag=0;
	for(int i=1;i<=n;++i)
	 for(int j=1;j<=n;++j)
	{
		b[1]=s[i][0];
		b[2]=s[i][1];
		b[3]=s[j][0];
		b[4]=s[j][1];
		if(b[1]==a[1]&&b[2]==a[2]) flag=1;
		if(b[2]==a[1]&&b[3]==a[2]) flag=1;
		if(b[3]==a[1]&&b[4]==a[2]) flag=1;
	}
	if(flag) 
	 printf("YES\n");
	 else 
	  printf("NO\n");
	return 0;
}