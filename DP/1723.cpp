#include<cstdio>
#include<cstring>
char s[100050];
int main(){
	int n,i,j;
	bool ok=0;
	scanf("%s",&s);
	n=strlen(s);
	for(i=0;i<n-1;i++)if(s[i]=='A'&&s[i+1]=='B'){
		ok=1;
		break;
	}
	if(!ok){
		puts("NO");
		return 0;
	}
	for(j=0;j<n-1;j++)if(j!=i&&j!=i+1&&j+1!=i&&s[j]=='B'&&s[j+1]=='A'){
		puts("YES");
		return 0;
	}
	ok=0;
	for(i=0;i<n-1;i++)if(s[i]=='B'&&s[i+1]=='A'){
		ok=1;
		break;
	}
	if(!ok){
		puts("NO");
		return 0;
	}
	for(j=0;j<n-1;j++)if(j!=i&&j!=i+1&&j+1!=i&&s[j]=='A'&&s[j+1]=='B'){
		puts("YES");
		return 0;
	}
	puts("NO");
	return 0;
}