#include<bits/stdc++.h>
char s[3],x[101][3];
int N;
int main(){
	scanf("%s",s);
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
		scanf("%s",x[i]);
	for(int i=1;i<=N;i++){
		if(s[0]==x[i][0]&&s[1]==x[i][1]){
			printf("YES\n");
			return 0;
		}
		if(x[i][1]==s[0]){
			for(int j=1;j<=N;j++)
				if(x[j][0]==s[1]){
					printf("YES\n");
					return 0;
				}
		}
	}
	printf("NO\n");
	return 0;
}