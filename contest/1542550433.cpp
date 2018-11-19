#include<cstdio>
#include<iostream>
#include<cstring>
#define inf 1e9
#define N 200005
using namespace std;
int n,a[300][300];
char s1[3],s[205][5];
int main(){
	scanf("%s",s1);
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		scanf("%s",s[i]);
		a[s[i][0]][s[i][1]]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			a[s[i][1]][s[j][0]]=1;
	}
	if(a[s1[0]][s1[1]]) printf("YES");else printf("NO");
}