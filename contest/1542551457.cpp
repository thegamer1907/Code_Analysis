#include<cstdio>
#include<cstring>
int n,k,buf,now,full,q;
int cnt[70];
bool fl;
int main(){
//	scanf("%d",&q);
	q=1;
	while(q--){
		memset(cnt,0,sizeof cnt);
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
		for(int i=0;i<=16;++i){
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
	}
	return 0;
}