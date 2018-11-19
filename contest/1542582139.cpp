#include<cstdio>
#include<algorithm>
char a[1005][5];
int n;
int main(){
	scanf("%s",a[0]);
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%s",a[i]);
	for(int i=1;i<=n;i++)
	 for(int j=1;j<=n;j++){
	 	if(a[i][1]==a[0][0]&&a[j][0]==a[0][1]) return printf("YES\n"),0;
	 }
	for(int i=1;i<=n;i++) if(a[i][0]==a[0][0]&&a[i][1]==a[0][1]) return printf("YES\n"),0;
	printf("NO\n");
	return 0;
}