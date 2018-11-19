#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char ch[211][5];
int i,j,k,n,m,ans;
int main(){
	scanf("%s",ch[0]);scanf("%d",&n);ans=0;
	for (i=1;i<=n;i++){
		scanf("%s",ch[i]);
		if (ch[i][0]==ch[0][0]&&ch[i][1]==ch[0][1]) ans=1;
	}
	for (i=1;!ans&&i<=n;i++)
	 for (j=1;!ans&&j<=n;j++)
	  if (ch[i][1]==ch[0][0]&&ch[j][0]==ch[0][1]) ans=1;
	puts(ans?"YES":"NO");
	return 0;
}