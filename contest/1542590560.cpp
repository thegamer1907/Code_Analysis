#include<cstdio>
#include<cstring>
using namespace std;
int n;
char A[2];
char s[105][2];
int main(){
	scanf("%s",A);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	scanf("%s",s[i]);
	for(int i=1;i<=n;i++){
		int j;
		for(j=0;j<2;j++)
		if(s[i][j]!=A[j]){
			break;
		}
		if(j==2){
			printf("YES\n");
			return 0;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(s[i][1]==A[0]&&s[j][0]==A[1]){
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	return 0;
}