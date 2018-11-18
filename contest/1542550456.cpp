#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<bitset>
using namespace std;

const int N=205;
const int M=600;

int n,m,s,tot,x,y;
bool flag;
int fl[N][10],fr[N][10],len[N],mx[N];
bitset<M> b[N][10];
char c[N];

int main(){
	int i,j,k,l,r;
	scanf("%d",&n); tot=n;
	for (i=1;i<=n;i++){
		scanf("%s",c+1); m=strlen(c+1);
		len[i]=min(9,m);
		for (j=1;j<=m;j++){
			s=0;
			for (k=j;k<=m;k++){
				s+=(c[k]-'0')<<k-j;
				b[i][k-j+1][s]=1;
				if (k-j>=8) break;
			}
		}
		s=0;
		for (j=1;j<=m;j++){
			s+=(c[j]-'0')<<j-1;
			fl[i][j]=s;
			if (j>=9) break;
		}
		for (j=m;j>=1;j--){
			s=0;
			for (k=j;k<=m;k++) s+=(c[k]-'0')<<k-j;
			fr[i][m-j+1]=s;
			if (m-j>=8) break;
		}
	}
	scanf("%d",&m);
	while (m--){
		scanf("%d%d",&x,&y);
		tot++;
		len[tot]=min(9,len[x]+len[y]);
		for (i=1;i<=len[x];i++) b[tot][i]|=b[x][i];
		for (i=1;i<=len[y];i++) b[tot][i]|=b[y][i];
		for (i=1;i<=len[x];i++)
			for (j=1;j<=len[y];j++){
				if (i+j>9) break;
				b[tot][i+j][fr[x][i]+(1<<i)*fl[y][j]]=1;
			}
		for (i=1;i<=len[x];i++) fl[tot][i]=fl[x][i];
		for (i=1;i<=len[y];i++) fr[tot][i]=fr[y][i];
		for (i=1;i<=len[y];i++){
			if (i+len[x]>9) break;
			fl[tot][i+len[x]]=fl[x][len[x]]+(1<<len[x])*fl[y][i];
		}
		for (i=1;i<=len[x];i++){
			if (i+len[y]>9) break;
			fr[tot][i+len[y]]=fr[x][i]+(1<<i)*fr[y][len[y]];
		}
		flag=0;
		for (i=9;i>=1;i--)
			if (b[tot][i].count()==(1<<i)){
				printf("%d\n",i); flag=1;
				break;
			}
		if (!flag) printf("0\n");
	}
	return 0;
}