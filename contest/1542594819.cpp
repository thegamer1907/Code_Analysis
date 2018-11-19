#include<bits/stdc++.h>
using namespace std;
char s[5],a[1005][5];
int n,ans,i,j;
int main(){
	scanf("%s",s+1);
	scanf("%d",&n);
	ans=0;
	for (i=1;i<=n;i++){
	  scanf("%s",a[i]+1);
	  ans|=a[i][1]==s[1]&&a[i][2]==s[2];
	}
	for (i=1;i<=n;i++)
	  for (j=1;j<=n;j++)
	    if (a[i][2]==s[1]&&a[j][1]==s[2])
	      ans=1;
	puts(ans?"YES":"NO");
}