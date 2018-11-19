#include<cstdio>
#include<cstring>
#include<cctype>
#include<cmath>
#include<algorithm>
#define ll long long
using namespace std;
int read(){
    char c;int s=0,t=1;
    while(!isdigit(c=getchar()))if(c=='-')t=-1;
    do{s=s*10+c-'0';}while(isdigit(c=getchar()));
    return s*t;
}
/*------------------------------------------------------------*/
const int inf=0x3f3f3f3f,mk=13,maxn=210;

int n,m,d[maxn][maxn],a[maxn][maxn],b[maxn][maxn],kind[maxn],p[maxn],len[maxn],le,e[maxn];
bool c[maxn][mk+2][10010];
char s[maxn];

void check(int x){
	bool ok=1;
	int num=0;
	for(int k=kind[x]+1;k<=min(len[x],mk);k++){
		num=0;
		//memset(c[x][k],0,sizeof(c[x][k]));
		for(int i=1;i<k;i++)num=(num>>1)+(d[x][i]<<(k-1));
		for(int i=k;i<=len[x];i++){
			num=(num>>1)+(d[x][i]<<(k-1));
			c[x][k][num]=1;
		}
		//printf("k=%d\n",k);
		//for(int i=0;i<(1<<k);i++)printf("c[%d]=%d\n",i,c[i]);
		if(ok){
			for(int i=0;i<(1<<k);i++)if(!c[x][k][i])ok=0;
			if(ok)kind[x]++;
		}
	}
}
void update(int x){
	bool ok=1;
	int num=0;
	for(int k=kind[x]+1;k<=min(le,mk);k++){
		num=0;
		//memset(c[x][k],0,sizeof(c[x][k]));
		for(int i=1;i<k;i++)num=(num>>1)+(e[i]<<(k-1));
		for(int i=k;i<=le;i++){
			num=(num>>1)+(e[i]<<(k-1));
			c[x][k][num]=1;
		}
		//printf("k=%d\n",k);
		//for(int i=0;i<(1<<k);i++)printf("c[%d]=%d\n",i,c[i]);
		if(ok){
			for(int i=0;i<(1<<k);i++)if(!c[x][k][i])ok=0;
			if(ok)kind[x]++;
		}
	}
}
int main(){
    n=read();
    for(int i=1;i<=n;i++){
    	scanf("%s",s+1);len[i]=strlen(s+1);
    	p[i]=min(len[i],mk);
    	for(int j=1;j<=p[i];j++)a[i][j]=s[j]-'0';
    	for(int j=len[i]-p[i]+1;j<=len[i];j++)b[i][j-len[i]+p[i]]=s[j]-'0';
    	for(int j=1;j<=len[i];j++)d[i][j]=s[j]-'0';
    	//for(int j=1;j<=p[i];j++)printf("%d",b[i][j]);puts("");
    	check(i);
    	//printf("kind[%d]=%d\n",i,kind[i]);
    }
    m=read();
    for(int l=1;l<=m;l++){
    	int A=read(),B=read();
    	int news=n+l;
    	if(len[A]+len[B]<mk*4){
    		len[news]=len[A]+len[B];
    		for(int i=1;i<=len[A];i++)d[news][i]=d[A][i];
    		for(int i=1;i<=len[B];i++)d[news][len[A]+i]=d[B][i];
    		p[news]=min(mk,len[news]);
    		for(int j=1;j<=p[news];j++)a[news][j]=d[news][j];
    		for(int j=len[news]-p[news]+1;j<=len[news];j++)b[news][j-len[news]+p[news]]=d[news][j];
    	}else{
    		len[news]=inf;p[news]=mk;
    		for(int i=1;i<=p[A];i++)a[news][i]=a[A][i];
    		if(len[A]<mk)for(int i=1;i<=mk-len[A];i++)a[news][len[A]+i]=a[B][i];
    		for(int i=1;i<=p[B];i++)b[news][mk-p[B]+i]=b[B][i];
    		if(len[B]<mk)for(int i=1;i<=mk-len[B];i++)b[news][i]=b[A][len[B]+i];
    	}
    	kind[news]=max(kind[A],kind[B]);
    	for(int i=kind[news]+1;i<=mk;i++)for(int j=0;j<=9000;j++)c[news][i][j]|=c[A][i][j]||c[B][i][j];
    	le=0;
    	for(int i=1;i<=p[A];i++)e[++le]=b[A][i];
    	for(int i=1;i<=p[B];i++)e[++le]=a[B][i];
    	//printf("p[%d]=%d\n",A,p[A]);
    	//for(int i=1;i<=le;i++)printf("%d",e[i]);puts("");
    	update(news);
    	printf("%d\n",kind[news]);
    }
    return 0;
}
