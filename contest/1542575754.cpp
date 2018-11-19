#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int mo=1e9+7;
char key[5],s[120][5];
int main(){
	//freopen("ferry.in","r",stdin);
	int n,i,x=0,y=0;
	scanf("%s%d",key,&n);
	for (i=1;i<=n;++i){
		scanf("%s",s[i]);
		if (!memcmp(s[i],key,sizeof(key))) x=y=1;
		if (s[i][0]==key[1]) y=1;
		if (s[i][1]==key[0]) x=1;
	}
	//printf("%d %d\n",x,y);
	if (x&&y) printf("YES\n");
	else printf("NO\n");
	return 0;
}