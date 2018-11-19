#include<cstdio>
#include<cstring>
using namespace std;

char ch[111][2],str[2];
int n,v1,v2,v3,v4;

int main(){
//	freopen("a.in","r",stdin);
	scanf("%s",str);
	scanf("%d",&n);
	for (int i=1;i<=n;++i) scanf("%s",ch[i]);
	for (int i=1;i<=n;++i) if (ch[i][0]==str[0]&&ch[i][1]==str[1]) {printf("YES\n");return 0;}
	for (int i=1;i<=n;++i){
		if (ch[i][0]==str[1]) v3=true;
		if (ch[i][1]==str[0]) v4=true;
	}
	if ((v3&&v4)) printf("YES\n");
	else printf("NO\n");
	return 0;
}
