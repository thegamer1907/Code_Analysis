#include<cstdio>
#include<algorithm>
#include<iostream> 
using namespace std;
bool f[20]; 
int n,k,x;
int mi[4];
int main()
{
	scanf("%d%d",&n,&k);
	mi[1]=1;
	mi[2]=3;
	mi[3]=7;
	mi[4]=15;
	for (int i=1;i<=n;i++)
	{
		int q=0;
		for (int j=0;j<k;j++)
		{
			scanf("%d",&x);
			q=q*2+x;
		}
	//	cout<<q<<endl;
		f[q]++;
	}
	for (int i=0;i<(1<<k);i++)
	{
		for (int j=0;j<(1<<k);j++)
		{
			if (f[i]&&f[j])
			{
			//	cout<<i<<" "<<j<<" "<<(i&j)<<endl;
				if ((i&j)==0) {printf("YES");return 0;}
			}
		}
	}
	printf("NO");
}
