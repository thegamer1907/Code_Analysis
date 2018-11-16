#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&m);
	int b[m];
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);
	sort(a,a+n);
	sort(b,b+m);
	int x,y,c=0;
	for(x=0;x<n;x++)
	{
		for(y=0;y<m;y++)
		{
		if(abs(a[x]-b[y])<=1)
     {b[y]=-1;
     a[x]=-1;
	c+=1;
	
		}		
	}
}
printf("%d\n",c);
}