#include<cstdio>
#include<cstring>
char ch[3000][2];
char pw[3];
inline bool Check(char *a,char *b){
	if(a[0]==pw[0]&&a[1]==pw[1]) return true;
	if(a[1]==pw[0]&&b[0]==pw[1]) return true;
	if(b[0]==pw[0]&&b[1]==pw[1]) return true;
	return false;
}
int main(){
	int n;
	scanf("%s",pw);
	scanf("%d\n",&n);
	for(int i=1;i<=n;i++){
		ch[i][0]=getchar();ch[i][1]=getchar();getchar();
	}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(Check(ch[i],ch[j])){
				puts("YES");
				return 0;
			}
	puts("NO");
	return 0;
}