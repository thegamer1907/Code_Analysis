#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<queue>
#include<stack>
#include<vector>
#include<map>
#include<set>
using namespace std;

typedef long long int LL;
const int MAXN = 100;
const int MAXM = 100;
const int MAXK = 12;
const int INF = 0x3f3f3f3f;
template<class T>
void Read(T &x){
	x=0;char c=getchar();bool flag=0;
	while(c<'0'||'9'<c){if(c=='-')flag=1;c=getchar();}
	while('0'<=c&&c<='9'){x=x*10+c-'0';c=getchar();}
	if(flag)x=-x;
}

int n,m;
char origin[MAXM+10][MAXM+10];
int a[MAXM+10],b[MAXM+10];
char pre[MAXN*2+10][MAXK+5],suf[MAXN*2+10][MAXK+5];
bool vis[MAXN*2+10][(1<<MAXK)+10];
int ans[MAXM+10];

void getpre(char *pre,char *str){
	int len=strlen(str+1);
	for(int i=1;i<=len&&i<=MAXK;++i)
		pre[i]=str[i];
	pre[min(len,MAXK)+1]='\0';
}

void getsuf(char *suf,char *str){
	int len=strlen(str+1);
	int t=min(len,MAXK);
	for(int i=1;i<=len&&i<=MAXK;++i)
		suf[t-i+1]=str[len-i+1];
	suf[min(len,MAXK)+1]='\0';
}

void mark(int id,int k,char *str){
	int len=strlen(str+1);
	int t=0;
	for(int i=1;i<=len;++i){
		if(i>k)t-=(str[i-k]-'0')<<(k-1);
		t=(t<<1)+str[i]-'0';
		//printf("add %d\n",t);
		if(i>=k)vis[id][t]=true;
	}
}

char str[MAXM+10];
int merge(int k,int id,int l,int r){
	int len1=strlen(suf[l]+1),len2=strlen(pre[r]+1);
	int len=len1+len2;
	for(int i=1;i<=len1;++i)str[i]=suf[l][i];
	for(int i=1;i<=len2;++i)str[len1+i]=pre[r][i];
	str[len+1]='\0';
	
	//printf("merging [%d,%d]->%d\n",l,r,id);
	//printf("len: [%d+%d]=%d\n",len1,len2,len);
	//printf("%s %s\n",suf[l]+1,pre[r]+1);
	
	mark(id,k,str);
	//puts("PASS1");
	if(len1>=k)memcpy(pre[id],pre[l],sizeof(pre[l]));
	else getpre(pre[id],str);
	if(len2>=k)memcpy(suf[id],suf[r],sizeof(suf[r]));
	else getsuf(suf[id],str);
	
	int ed=(1<<k)-1;
	bool flag=true;
	for(int i=0;i<=ed;++i){
		vis[id][i]|=vis[l][i]|vis[r][i];
		if(!vis[id][i])flag=false;
	}
	
	//puts("PASS2");
	
	return flag?k:0;
}

int main(){
	Read(n);
	for(int i=1;i<=n;++i){
		scanf("%s",origin[i]+1);
		getpre(pre[i],origin[i]),getsuf(suf[i],origin[i]);
		//printf("[%s,%s]\n",pre[i]+1,suf[i]+1);
	}
	
	Read(m);
	for(int i=1;i<=m;++i)Read(a[i]),Read(b[i]);
	for(int k=1;k<=MAXK;++k){
		memset(vis,0,sizeof(vis));
		for(int i=1;i<=n;++i)mark(i,k,origin[i]);
		for(int i=1;i<=m;++i){//printf("[%d,%d]\n",k,i);
			ans[i]=(merge(k,n+i,a[i],b[i])==ans[i]+1?ans[i]+1:ans[i]);
		}
	}
	
	for(int i=1;i<=m;++i)printf("%d\n",ans[i]);
}
/*
2
01
10
2
1 2
2 1
*/
