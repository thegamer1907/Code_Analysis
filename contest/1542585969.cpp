#include <stdio.h>
char sub[10];
char op[110][10];
int n;
bool ans,pre,end;
int main(){
	scanf("%s",sub);
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;++i){
		scanf("%s",op[i]);
		if(op[i][0]==sub[0] && op[i][1]==sub[1])  ans=true;
	}
	if(ans==true){
		puts("YES");return 0;
	}
	for(i=1;i<=n;++i){
		if(op[i][1]==sub[0])  pre=true;
		if(op[i][0]==sub[1])  end=true;
	}
	if(pre==1 && end==1)  ans=1;
	if(ans==0) puts("NO");
	else puts("YES");
	return 0;
}
