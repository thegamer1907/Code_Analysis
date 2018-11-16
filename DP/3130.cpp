#include<cstdio>
int h,w,q,f[501][501],g[501][501],r1,c1,r2,c2; char s[501][501];
int main(){
	scanf("%d%d",&h,&w);
	for(int i=1;i<=h;++i){
		scanf("%s",s[i]+1);
		for(int j=1;j<=w;++j){
			f[i][j]=f[i-1][j]+f[i][j-1]-f[i-1][j-1]+(s[i][j]=='.'&&s[i][j-1]=='.');
			g[i][j]=g[i-1][j]+g[i][j-1]-g[i-1][j-1]+(s[i][j]=='.'&&s[i-1][j]=='.');
		}
	}
	scanf("%d",&q); for(;q--;){
		scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
		printf("%d\n",f[r2][c2]-f[r2][c1]-f[r1-1][c2]+f[r1-1][c1]+g[r2][c2]-g[r2][c1-1]-g[r1][c2]+g[r1][c1-1]);
	}
	return 0;
}