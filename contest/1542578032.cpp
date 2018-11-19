#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#define MAXN 5000000

int n,k;
int vis[MAXN];
int a[MAXN];
int cnt;
int p[5];
int res[5];
int f;

bool check(int x){
	memset(res,0,sizeof(res));
	int tot=0;
	for(int i=1;i<=cnt;i++){
		if((1<<(i-1))&x){
			tot++;
			for(int j=1;j<=k;j++)
				if((1<<(j-1))&a[i])
					res[j]++;
		}
	}
//	for(int i=1;i<=k;i++)
//		printf("%d ",res[i]);
//	printf("\n");
	for(int i=1;i<=k;i++){
		if(res[i]*2>tot)
			return 0;
	}
	return 1;
}

int main(){
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++){
		memset(p,0,sizeof(p));
		for(int j=1;j<=k;j++){
			scanf("%d",p+j);
		}
		int res=0;
		for(int j=1;j<=k;j++)
			if(p[j]) res|=(1<<(j-1));
		vis[res]=1;
	}
	for(int i=0;i<(1<<k);i++){
		if(vis[i]) a[++cnt]=i;
	}
	for(int i=1;i<(1<<cnt);i++){
//		printf("%d",i);
		if(check(i)){
			f=1;
			break;
		}
	}
	if(f) printf("YES");
	else printf("NO");
//	system("pause");
}


