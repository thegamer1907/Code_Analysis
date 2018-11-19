#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>

int n;
char s[200][2];
bool f1,f2;

int main(){
	scanf("%c%c",&s[0][0],&s[0][1]);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		getchar();
		scanf("%c%c",&s[i][0],&s[i][1]);
	}
	for(int i=1;i<=n;i++){
		if(s[i][0]==s[0][0]&&s[i][1]==s[0][1]){
			f1=f2=1;
		}
		if(s[i][0]==s[0][1]){
			f1=1;
		}
		if(s[i][1]==s[0][0]){
			f2=1;
		}
		if(f1&&f2) break;
	}
	if(f1&&f2) printf("YES");
	else printf("NO");
//	system("pause");
}

