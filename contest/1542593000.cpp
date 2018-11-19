#include <iostream>
#include <cstdio>
#include <cstdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

const int MAXN=1000;

int n;
char a[MAXN][3];
char s[3];

void init(){
	scanf(" %s",s);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s",a[i]);
	}
	for(int i=1;i<=n;i++){
		if(a[i][0]==s[0] && a[i][1]==s[1]){
			printf("YES");
			return ;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][1]==s[0] && a[j][0]==s[1]){
				printf("YES");
				return ;
			}
		}
	}
	printf("NO");
}

int main(int argc, char** argv) {
	init();
	return 0;
}
