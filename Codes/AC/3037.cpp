#include<bits/stdc++.h>
using namespace std;
char s[1000024];
int ne[1000024],tim[1000024],l;
void build(){
	ne[0]=-1; int i=1,j=0;
	while(i<l&&j<l) if(j==-1||s[i]==s[j]) ne[++i]=++j; else j=ne[j];
}
int main(){
    int i,n,ans=0; scanf("%s",s); l=strlen(s);
    build();
    for(i=1;i<=l;++i) tim[ne[i]]++;
    int last=ne[l];
	if(tim[last]==1){
		last=ne[last];
		while(last){if(tim[last]) break; last=ne[last];}
	}
	if(last==0){puts("Just a legend"); return 0;}
	else for(i=0;i<last;++i) putchar(s[i]);
    return 0;
}
