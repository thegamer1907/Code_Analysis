#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int sum=0,x;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x>m) sum+=2;
		else sum++;
	}
	printf("%d",sum);
}