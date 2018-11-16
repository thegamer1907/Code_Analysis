#include <stdio.h>
char mp[502][502];
int rsm[501][501],csm[501][501];
int main()
{
	int h,w;
	scanf("%d%d",&h,&w);
	for (int i=1;i<=h;++i)
		scanf("%s",mp[i]+1);
	for (int i=1;i<=h;++i)
		for (int j=1;j<w;++j)
			rsm[i][j]=rsm[i][j-1]+(mp[i][j]=='.'&&mp[i][j+1]=='.');
	for (int j=1;j<=w;++j)
		for (int i=1;i<h;++i)
			csm[j][i]=csm[j][i-1]+(mp[i][j]=='.'&&mp[i+1][j]=='.');
	int q;
	scanf("%d",&q);
	while (q--)
	{
		int x1,y1,x2,y2;
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		int ans=0;
		for (int i=x1;i<=x2;++i)
			ans+=rsm[i][y2-1]-rsm[i][y1-1];
		for (int j=y1;j<=y2;++j)
			ans+=csm[j][x2-1]-csm[j][x1-1];
		printf("%d\n",ans);
	}
	return 0;
}
