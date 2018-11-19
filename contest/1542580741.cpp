#include<cstdio>
int n;
char s[110][5];
char c[5];
int main(){
	scanf("%s%d",c,&n);
	for(int i=1;i<=n;i++){
		scanf("%s",s[i]);
		if(s[i][0]==c[0]&&s[i][1]==c[1]){
			puts("YES");
			return 0;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(s[i][1]==c[0]&&s[j][0]==c[1]){
				puts("YES");return 0;
			}
		}
	}
	puts("NO");
	return 0;
}