#include<cstdio>
using namespace std;

int m,n;
char s1,s2,s[105][2];

void input(){int i;
scanf("%c%c",&s1,&s2);
	scanf("\n%d",&n);
	for(i=1;i<=n;++i){
		scanf("\n%c%c",&s[i][0],&s[i][1]);
	}
}

void deal(){int i,p1,p2;
bool flag=0;
	for(i=1;i<=n;++i){
		if(s[i][0]==s1 && s[i][1]==s2){flag=1;break;}
	}
	p1=0;p2=0;
	for(i=1;i<=n;++i){
		if(s[i][1]==s1 || s[i][0]==s2){
			if(s[i][1]==s1)p1=i;
			if(s[i][0]==s2)p2=i;
		}
	}
	if(p1*p2!=0)flag=1;
	if(flag)printf("YES\n");
	else printf("NO\n");
}

int main(){
	input();
	deal();
return 0;}