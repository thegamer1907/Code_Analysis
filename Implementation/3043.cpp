#include<bits/stdc++.h>
using namespace std;
int a,b,k=1;
int main()
{
	scanf("%d%d",&a,&b);
	for(int i=1;i<=min(a,b);i++)
	  k*=i;
	return printf("%d\n",k),0;
}
