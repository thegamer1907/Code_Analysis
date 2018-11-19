#include<cstdio>
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
const int N=18;
int n,m,now,ans[205];
string a[2][205],o;
set<int>S[205][21];
int main(void){
	register int i,j,l,now,x,y;
	scanf("%d",&n);
	for(i=1;i<=n;++i){
		cin>>a[0][i],a[1][i]=a[0][i];
		for(j=1;j<N;++j){
			if(j>a[0][i].size())
				break;
			now=0;
			for(l=0;l<j;++l)
				now=now*2+a[0][i][l]-'0';
			S[i][j].insert(now);
			for(l=j;l<a[0][i].size();++l){
				now=now*2+a[0][i][l]-'0';
				now&=(1<<j)-1;
				S[i][j].insert(now);
			}
		}
	}
	scanf("%d",&m);
	for(i=1;i<=m;++i){
		scanf("%d%d",&x,&y);
		if(a[0][x].size()<18)a[0][n+i]=(a[0][x]+a[0][y]).substr(0,18);
		else a[0][n+i]=a[0][x];
		if(a[1][y].size()<18){
			o=a[1][x]+a[1][y];
			if(o.size()>18)
				a[1][n+i]=o.substr(o.size()-18,18);
			else a[1][n+i]=o;
		}
		else a[1][n+i]=a[1][y];
		o=a[1][x]+a[0][y];
		for(j=1;j<N;++j){
			if(j>o.size())
				break;
			now=0;
			for(l=0;l<j;++l)
				now=now*2+o[l]-'0';
			S[n+i][j].insert(now);
			for(l=j;l<o.size();++l)
				now=now*2+o[l]-'0',now&=(1<<j)-1,S[n+i][j].insert(now);
			for(set<int>::iterator p=S[x][j].begin();p!=S[x][j].end();++p)
				S[n+i][j].insert(*p);
			for(set<int>::iterator p=S[y][j].begin();p!=S[y][j].end();++p)
				S[n+i][j].insert(*p);
			if(ans[n+i]==j-1&&S[n+i][j].size()==1<<j)
				++ans[n+i];
		}
		printf("%d\n",ans[n+i]);
	}
	return 0;
}