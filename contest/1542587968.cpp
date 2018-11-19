#include<iostream>
#include<stdio.h>  
#include<algorithm>  
#include<string.h>  
#include<queue>  
#include<map>  
#include<vector>  
#include<math.h>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<set>
#include<ctime>
#include<vector>
#include<cmath>
#include<algorithm>
#include<map>
#include<queue>
#include<deque>
#define inf 2000000000
#define INF 1<<29 
#define s(a) scanf("%d",&a)
#define me(a,b) memset(a,b,sizeof(a)) 
typedef long long ll;
using namespace std; 
const int maxn=1e6+5;
const int mo=1e9+7;
inline int read()
{
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
priority_queue<ll,vector<ll>,greater<ll> >que;

struct p{
	char t[2];
}a[101];
int main () {
    
    char s[2],t[2];
    int cnt[40];
    int n;
    while(~scanf("%s",s)){
    	s(n);
    	int flag=0;
    	for(int i=1;i<=n;i++){
    		scanf("%s",&a[i].t);
    		if(a[i].t[0]==s[0]&&a[i].t[1]==s[1])flag=1;
    		else if(a[i].t[1]==s[0]&&a[i].t[0]==s[1])flag=1;
		}
		if(flag){
    		puts("YES");
    		continue;
		}

    	for(int i=1;i<=n;i++){
    		if(a[i].t[0]==s[1]){
    			
    			for(int j=1;j<=n;j++){
    				if(a[j].t[1]==s[0]){
    					flag=1;
    					break;

					}
				}
			}
		}
    	
    	if(flag){
    		puts("YES");
		}
		else puts("NO");
	}
    
    
    
    return 0 ;
}
