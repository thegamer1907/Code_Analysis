#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
const int W=1<<15;
int n, f[30], w[30];
bool q[205][20][W+5];
char s[205][3][500];
int read(){
	int p=0;
	char ch=getchar();
	while (ch<'0' || ch>'9') ch=getchar();
	while (ch>='0' && ch<='9') p=p*10+ch-'0', ch=getchar();
	return p;
}
int main(){
	n=read();
	for (int i=1;i<=n;i++){
		scanf("%s", s[i][0]);
		strcpy(s[i][1],s[i][0]);
		for (int j=0;s[i][0][j]!='\0';j++){
			int p=0;
			for (int k=1;k<=15 && s[i][0][j+k-1]!='\0';k++)
				p=p*2+s[i][0][j+k-1]-'0',
				(!q[i][k][p]?(q[i][k][p]=1):0);
		}
	}
	f[1]=2;
	for (int i=2;i<=20;i++) f[i]=f[i-1]<<1;
	for (int m=read();m;m--){
		int u=read(), v=read();
		strcpy(s[++n][0],s[u][0]);
		strcpy(s[n][1],s[u][1]);
		strcat(s[n][1],s[v][0]);
		for (int i=1;i<=15;i++){
			w[i]=0;
			for (int j=0;j<=W;j++)
				if (q[u][i][j] || q[v][i][j])
					w[i]+=q[n][i][j]=1;
		}
		for (int i=0;s[n][1][i]!='\0';i++){
			int p=0;
			for (int j=1;j<=15 && s[n][1][i+j-1]!='\0';j++)
				p=p*2+s[n][1][i+j-1]-'0',
				(!q[n][j][p]?(w[j]+=q[n][j][p]=1):0);
		}
		for (int j=15;j>=0;j--)
			if (w[j]==f[j]){
				printf("%d\n", j);
				break;
			}
		if (strlen(s[v][1])>=100) strcpy(s[n][1],s[v][1]);
		if (strlen(s[u][0])<100) strcat(s[n][0],s[v][0]);
		int k=strlen(s[n][1]);
		if (k>100){
			for (int j=1;j<=100;j++)
				s[n][1][j-1]=s[n][1][k-101+j];
			s[n][1][100]=0;
		}
	}
	return 0;
}
