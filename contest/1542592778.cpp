/* LittleFall : Hello! */
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	char p[300];
	char pp[5];
	int n,ans=0,pi=0,po=0;
	scanf("%s",p);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",pp);
		if(pp[0]==p[0]&&pp[1]==p[1])
			ans=2;
		if(pp[0]==p[1])
			pi=1;
		if(pp[1]==p[0])
			po=1;
	}
	if(ans==2||(pi==1&&po==1))
		printf("YES\n");
	else
		printf("NO\n");



	return 0;
}