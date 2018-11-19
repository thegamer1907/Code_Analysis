#include<cstdio>
#include<cstring>
#define N 100010
using namespace std;
bool b[2][2][2][2];
int c[5],n,m,a[N][5];
int Dfs(int x,int y){
	if(y==m+1){
		if(m==4)
			if(b[c[1]][c[2]][c[3]][c[4]])
				return 1;
		if(m==3)
			if(b[c[1]][c[2]][c[3]][0])
				return 1;
		if(m==2)
			if(b[c[1]][c[2]][0][0])
				return 1;
		if(m==1)
			if(b[c[1]][0][0][0])
				return 1;
		return 0;
	}
	if(a[x][y]){
		c[y]=0;
		if(Dfs(x,y+1))return 1;
	}
	else {
		c[y]=1;
		if(Dfs(x,y+1))return 1;
		c[y]=0;
		if(Dfs(x,y+1))return 1;
	}
	return 0;
}
int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)scanf("%d",&a[i][j]);
		if(m==1)memset(b[a[i][1]],1,sizeof(b[a[i][1]]));
		else if(m==2)memset(b[a[i][1]][a[i][2]],1,sizeof(b[a[i][1]][a[i][2]]));
		else if(m==3)memset(b[a[i][1]][a[i][2]][a[i][3]],1,sizeof(b[a[i][1]][a[i][2]][a[i][3]]));
		else if(m==4)b[a[i][1]][a[i][2]][a[i][3]][a[i][4]]=1;
	}
	for(int i=1;i<=n;i++){
		if(Dfs(i,1)){
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
}