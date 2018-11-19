#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int n;
char s[109][2];
char p[2];

int main(){
	scanf("%s",p);
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++)
		scanf("%s",s[i]);
	for(i=1;i<=n;i++){
		if((s[i][0]==p[0]&&s[i][1]==p[1])||(s[i][0]==p[1] && s[i][1]==p[0])){
			puts("YES");
			return 0;
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(s[i][1]==p[0] && s[j][0]==p[1]){
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
	return 0;
}
