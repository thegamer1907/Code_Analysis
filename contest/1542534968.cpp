#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=10e5+5; 
int vis[N];
int a[N];
int m,n;
int Scan() {
    int res = 0, flag = 0;  
    char ch;  
    if((ch = getchar()) == '-') flag = 1;  
    else if(ch >= '0' && ch <= '9') res = ch - '0';  
    while((ch = getchar()) >= '0' && ch <= '9')  
        res = res * 10 + (ch - '0');  
    return flag ? -res : res;  
}  
main()
{
	scanf("%d%d",&n,&m);
	int temp;
	int sjude=0;
	for (int i=0;i<n;i++)
	{
		int key=0;
		for(int j=0;j<m;j++)
		{
			key<<=1;
			temp=Scan();
			key+=temp;
		}
		a[i]=key;
		if (key==0)
			sjude=1;
		//vis[key]=1;
	}
	if (sjude==1)
	{
		printf("YES\n");
			return 0;
	}
	for (int i=0;i<=n;i++)
	{
		if (vis[a[i]]==1)continue;
		vis[a[i]]=1;
		for (int j=i+1;j<n;j++)
		{
			if ((a[i]&a[j])==0)
			{
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
}