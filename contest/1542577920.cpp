//#include<cstdio>
//#include<cstring>
//int n,m;
//char s[210][2010];
//bool vis[2010];
//void solve(){
//	memset(vis,0,sizeof vis);
//	int x,y,sc=0;
//	scanf("%d%d",&x,&y);
//	char s1[2020];
//	for(int i=1;s[x][i];++i)s1[++sc]=s[x][i];
//	for(int i=1;s[y][i];++i)s1[++sc]=s[y][i];
//	s1[++sc]='\0';++n;
//	for(int i=1;i<=sc;++i)s[n][i]=s1[i];
//	int k=10,len=sc;
//	while((len-k+1)<(1<<k))--k;
//	for(int l=len;l>=1;--l){
//		for(int i=1;i+l-1<=len;++i){
//			int j=i+l-1,now=0;
//			for(int o=1;o<=l;++o){
//				if(s1[o+i-1]=='1')now=(now|(1<<o-1));
//			}
//			vis[now]=1;
//		}
//	}
//}
//int main(){
//	scanf("%d\n",&n);
//	for(int i=1;i<=n;++i){
//		scanf("%s\n",s[i]+1);
//	}
//	scanf("%d",&m);
//	while(m--){
//		solve();
//	}
//	return 0;
//}
#include<cstdio>
int n,k,buf,now,full;
int cnt[70];
bool fl;
int main(){
	scanf("%d%d",&n,&k),full=(1<<k)-1;
	for(int i=1;i<=n;++i){
		now=0;
		for(int j=1;j<=k;++j){
			scanf("%d",&buf);
			if(buf)now=(now|(1<<j-1));
		}
		++cnt[now];
		if(now==0)fl=1;
	}
	for(int i=0;i<=32;++i){
		if(!cnt[i])continue;
		int sta=(full^i);
		for(int j=sta;j;j=(j-1)&sta){
			if(cnt[j]){
				fl=1;
			}
		}
	}
	if(fl)printf("YES");
	else printf("NO");
	return 0;
}