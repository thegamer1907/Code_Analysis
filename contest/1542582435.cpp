#include<bits/stdc++.h>
using namespace std;
bool a[60];
int main()
{
	int i,j,k;
	int n,K,B;
	scanf("%d%d",&n,&K);
	B=(1<<K)-1;
	for(i=1;i<=n;i++){
		int x=0,y;
		for(j=1;j<=K;j++){
			scanf("%d",&y);
			x=x*2+y;
		}
		a[x]=1;
	}
	int ok=0;
	for(i=0;i<B;i++)
		for(j=0;j<B;j++)
			if((i&j)==0&&a[i]&&a[j])
				ok=1;
	if(ok) printf("YES");
	else printf("NO");
	return 0;
}
