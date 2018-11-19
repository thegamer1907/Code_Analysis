#include <cstdio>
using namespace std;
char t[10];
char s[200][10];
int n,i; 
int main()
{
	scanf("%s",t);
	scanf("%d",&n);bool zw1=false,zw2=false;
	for (i=1;i<=n;i++){
		scanf("%s",s[i]);
		if (s[i][0]==t[0]&&s[i][1]==t[1]){
			puts("YES");return 0;
		}
		if (s[i][1]==t[0]) zw1=true;
		if (s[i][0]==t[1]) zw2=true;
	}if (zw1&&zw2) puts("YES");else puts("NO");
	return 0;
}