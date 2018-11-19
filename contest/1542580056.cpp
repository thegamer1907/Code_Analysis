#include <bits/stdc++.h>
using namespace std;

const int L=20;
int n,m,len[205],pre[205][L+1],suf[205][L+1];
set <int> S[205][L+1];
char ch[105];

void work()
{
	scanf("%d\n",&n);
	for (int i=1; i<=n; i++)
		{
			scanf("%s\n",ch+1),len[i]=strlen(ch+1);
			for (int j=1; j<=L; j++)
				pre[i][j]=ch[j]-'0',suf[i][j]=ch[len[i]+1-j]-'0';
			for (int j=1,s; j<=len[i]; j++)
				{
					s=0;
					for (int l=1; l<=L&&j+l-1<=len[i]; l++)
						s<<=1,s|=ch[j+l-1]-'0',S[i][l].insert(s);
				}
			len[i]=min(len[i],L);
		}
	scanf("%d",&m);
	for (int i=n+1,x,y,ans; i<=n+m; i++)
		{
			scanf("%d %d",&x,&y);
			for (int j=1; j<=L; j++)
				{
					S[i][j]=S[x][j];
					for (set <int> ::iterator it=S[y][j].begin(); it!=S[y][j].end(); it++)
						S[i][j].insert(*it);
				}
			for (int l=1,s; l<=len[x]; l++)
				{
					s=0;
					for (int j=l; j; j--)  s<<=1,s|=suf[x][j];
					for (int r=1; r<=len[y]&&l+r<=L; r++)
						s<<=1,s|=pre[y][r],S[i][l+r].insert(s);
				}
			for (int j=1; j<=len[x]; j++)  pre[i][++len[i]]=pre[x][j];
			for (int j=1; j<=len[y]&&len[i]<L; j++)  pre[i][++len[i]]=pre[y][j];
			len[i]=0;
			for (int j=1; j<=len[y]; j++)  suf[i][++len[i]]=suf[y][j];
			for (int j=1; j<=len[x]&&len[i]<L; j++)  suf[i][++len[i]]=suf[x][j];
			for (ans=1; int(S[i][ans].size())==(1<<ans); ans++);
			printf("%d\n",ans-1);
		}
}

int main()
{
	work();
	return 0;
}
