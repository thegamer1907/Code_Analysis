#include<cstdio>
#include<cstring>
const int N=1e6+7;
char s[N];int ans,nxt[N],i,j,n,vis[N];
int main(){
	for(scanf("%s",s+1),vis[0]=true,n=strlen(s+1),i=2,j=0;i<=n;++i){
		while(j&&s[j+1]!=s[i])j=nxt[j];
		if(s[j+1]==s[i])j++;nxt[i]=j;if(i<n)vis[j]=true;
	}
	for(ans=nxt[n];ans&&!vis[ans];ans=nxt[ans]);
	s[ans+1]='\0';return 0*puts(ans==0?"Just a legend":s+1);
}
