#include<cstdio>
#include<algorithm>
#include<iostream> 
using namespace std;
bool f[1<<4+1]; 
int n,k,x;
int mi[5];
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
			if (x==1) q=q+(1<<j);
		}
	//	cout<<q<<endl;
		f[q]=1;
	}
	for (int i=0;i<=mi[k];i++)
	{
		for (int j=0;j<=mi[k];j++)
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