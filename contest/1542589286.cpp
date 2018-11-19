#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int n;
char s[500][4];

int main(){
	scanf("%s",s[0]);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%s",s[i]);
		if(strcmp(s[0],s[i])==0){
			printf("yes");
			return 0;
		} 
	}
	bool b1=0,b2=0;
	for(int i=1;i<=n;i++){
		if(s[i][0]==s[0][1]) b1=1;
		if(s[i][1]==s[0][0]) b2=1;
	}
	if(b1&&b2){
		printf("yes");
		return 0;
	}
	printf("no");
	return 0;
}
