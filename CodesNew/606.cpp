#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

unordered_map<ll,int> mmp;
int n,m,tot;
ll now;
char c;

int main(){
	scanf("%d%d",&n,&m);
	
	for(int i=1;i<=n;i++){
		for(c=getchar(),now=0;c!='\n';c=getchar()) now=now*(ll)73+c-'a'+3ll;
		if(!now){ i--; continue;}
		mmp[now]=1;
	}
	for(int i=1;i<=m;i++){
		for(c=getchar(),now=0;c!='\n';c=getchar()) now=now*(ll)73+c-'a'+3ll;
		if(!now){ i--; continue;}
		if(mmp[now]) tot++;
	}	
	
	n+=(tot&1);
	puts(n>m?"YES":"NO");
	
	return 0;
}