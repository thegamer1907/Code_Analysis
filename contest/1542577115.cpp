#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[100010][5];
int arr[3][3][3][3];
int main()
{
	int n,m;
	int cnt=0;
	scanf("%d%d",&n,&m);
	memset(a,0,sizeof(a));
	memset(arr,0,sizeof(arr));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
		arr[a[i][0]][a[i][1]][a[i][2]][a[i][3]]=1;
	}
	if(m==4)
	for(int i=0;i<n;i++)
	{
		int up1=!a[i][0];
		int up2=!a[i][1];
		int up3=!a[i][2];
		int up4=!a[i][3];
		for(int u1=0;u1<=up1;u1++)
			for(int u2=0;u2<=up2;u2++)
				for(int u3=0;u3<=up3;u3++)
					for(int u4=0;u4<=up4;u4++)
						if(arr[u1][u2][u3][u4]==1)
						{
							puts("YES");
							return 0;
						}

	}
	if(m==3)
		for(int i=0;i<n;i++)
		{
			int up1=!a[i][0];
			int up2=!a[i][1];
			int up3=!a[i][2];
			for(int u1=0;u1<=up1;u1++)
				for(int u2=0;u2<=up2;u2++)
					for(int u3=0;u3<=up3;u3++)
							if(arr[u1][u2][u3][0]==1)
							{
								puts("YES");
								return 0;
							}

		}
	if(m==2)
		for(int i=0;i<n;i++)
		{
			int up1=!a[i][0];
			int up2=!a[i][1];
			for(int u1=0;u1<=up1;u1++)
				for(int u2=0;u2<=up2;u2++)
						if(arr[u1][u2][0][0]==1)
						{
							puts("YES");
							return 0;
						}

		}
	if(m==1)
		for(int i=0;i<n;i++)
		{
			int up1=!a[i][0];
			for(int u1=0;u1<=up1;u1++)
					if(arr[u1][0][0][0]==1)
					{
						puts("YES");
						return 0;
					}
		}
	puts("NO");
}