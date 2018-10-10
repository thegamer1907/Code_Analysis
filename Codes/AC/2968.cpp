#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MS(a) memset(a,0,sizeof(a))
#define MP make_pair
#define PB push_back
const int INF = 0x3f3f3f3f;
const ll INFLL = 0x3f3f3f3f3f3f3f3fLL;
inline ll read(){
    ll x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
//////////////////////////////////////////////////////////////////////////
const int maxn = 1e6+10;

char s[maxn];
int nex[maxn],Hash[maxn];

void kmp(int n){
	memset(nex,0,sizeof nex);
	for(int i=2; i<=n; i++){
		int k = nex[i-1];
		while(k && s[k+1]!=s[i]) k=nex[k];
		if(s[k+1] == s[i]) nex[i]=k+1;
	}
}

int main(){
	scanf("%s",s+1);
	int n = strlen(s+1);
	kmp(n);
	for(int i=2; i<n; i++)
		Hash[nex[i]] = 1;
	int x = nex[n];
	while(!Hash[x] && x) x = nex[x];
	if(!x) printf("Just a legend");
	else for(int i=1; i<=x; i++)
		printf("%c",s[i]);
	puts("");

    return 0;
}