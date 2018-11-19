#include<cstdio>
#include<cstring>
int n,m,a[105],b[105],f[105];
char s[205][505]={0};
void qwqqwq(int x){
	int k;
	for(k=1;;k++){
		for(int i=0;i<(1<<k);i++){
			char str[20]={0};
			int t=i;
			for(int j=k-1;j>=0;j--){
				str[j]=(t&1)+'0';
				t>>=1;
			}
			if(strstr(s[x],str)==NULL){
				f[x]=k-1;
				return;
			}
		}
	}
}
int max(int a,int b){
	if(a>b) return a;
	return b;
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s",s[i]);
		qwqqwq(i);
	}
	scanf("%d",&m);
	for(int i=1;i<=m;i++){
		scanf("%d%d",&a[i],&b[i]);
		int j=0;
		for(int x=max(0,strlen(s[a[i]])-200);s[a[i]][x]!=0;x++){
			s[i+n][j]=s[a[i]][x];
			j++;
		}
		for(int x=0;s[b[i]][x]!=0&&x<200;x++){
			s[i+n][j]=s[b[i]][x];
			j++;
		}
		qwqqwq(i+n);
		memset(s[i+n],0,sizeof(s[i+n]));
		j=0;
		for(int x=0;s[a[i]][x]!=0&&x<200;x++){
			s[i+n][j]=s[a[i]][x];
			j++;
		}
		for(int x=max(0,strlen(s[b[i]])-200);s[b[i]][x]!=0;x++){
			s[i+n][j]=s[b[i]][x];
			j++;
		}
		f[i+n]=max(f[i+n],f[a[i]]);
		f[i+n]=max(f[i+n],f[b[i]]);
		printf("%d\n",f[i+n]);
	}
	return 0;
}
