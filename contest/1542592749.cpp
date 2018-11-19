#include <iostream>
#include <cstdio>
using namespace std;
const int MAXN=105;
char p[5],c[MAXN][5];
int n;
int main(){
	cin>>p>>n;
	for(int i=1;i<=n;i++)cin>>c[i];
	bool ans=0;
	for(int i=1;i<=n;i++)if(p[0]==c[i][0]&&p[1]==c[i][1])ans=1;
	for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)
		if(p[0]==c[i][1]&&p[1]==c[j][0])ans=1;
	if(ans)puts("YES");else puts("NO");
	return 0;
}
