#include<cstdio>

char s[5],a[105][5];
int n;
int main(){
	scanf("%s",s);
	scanf("%d",&n);
	for (int i=1;i<=n;i++) scanf("%s",a[i]);
	for (int i=1;i<=n;i++){
		if (a[i][0]==s[0]&&s[1]==a[i][1]) return printf("YES"),0;
		for (int j=1;j<=n;j++)
		 if (s[0]==a[i][1]&&s[1]==a[j][0]) return printf("YES"),0;
	}
	return printf("NO"),0;
}