#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<queue>

using namespace std;

int n;
char a[3];
char b[100][3];

int main()
{

	scanf("%s",a);
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	scanf("%s",b[i]);
	
	for(int i=0; i<n; i++)
	{
		if(a[0]==b[i][0] && a[1]==b[i][1])
		{
			printf("YES");
			return 0;
		}
	}
	int c1=0,c2=0;
	for(int i=0; i<n; i++)
	{
		if(a[0]==b[i][1]) c1=1;
		if(a[1]==b[i][0]) c2=1;
	}
	
	if(c1==1 && c2==1)
	printf("YES");
	else
	printf("NO");
	
	return 0;
}
