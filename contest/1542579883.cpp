#include<iostream>
#include<algorithm>
#include<cstdio> 
#include<cstring>
#include<vector>
using namespace std;
const int MAXN=110;
char a[MAXN][3];
int n,flag;
char b[3];

int main(){
	scanf("%s",b+1);
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%s",a[i]+1);
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=2;j++){
//			printf("%c ",a[i][j]);
//		}
//		printf("\n");
//	}
	for(int i=1;i<=n;i++){
		if(a[i][2]==b[1]) {
			flag=1;
			break;
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i][1]==b[2]){
			flag++;
			break;
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i][1]==b[1]&&a[i][2]==b[2]) {
			flag=2;
			break;
		}
	} 
	if(flag==2) printf("YES");
	else printf("NO");
	return 0;
}