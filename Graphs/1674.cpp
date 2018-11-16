#include <bits/stdc++.h>
#define N 100005
using namespace std;
int n,t,A[N],sayac,q=1;
int main()
{
	scanf("%d %d",&n,&t);
	for(int i=1;i<=n-1;i++)
	{
		scanf("%d",&A[i]);
	}
	for(int i=1;i<=n-1;i++)
	{
		sayac=A[q]+q;
		q=sayac;
		if(sayac==t)
		{
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	
	return 0;
}