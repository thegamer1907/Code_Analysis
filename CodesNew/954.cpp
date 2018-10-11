#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
const int MaxN = 1e3 + 5;
int n,m;
char p[MaxN][505],e[MaxN][505];
int main(){
	while(~(scanf("%d%d",&n,&m))){
		for(int i = 1;i<=n;i++)
			scanf("%s",&p[i]);
		for(int i = 1;i<=m;i++)
			scanf("%s",&e[i]);
		for(int i = 1;i<=n;i++)
			for(int j = i+1;j<=n;j++){
				if(strcmp(p[i],p[j])==0)
					n--;
			}
		for(int i = 1;i<=m;i++)
			for(int j = i+1;j<=m;j++){
				if(strcmp(e[i],e[j])==0)
					m--;
			}
    if(n>m)
    	printf("YES\n");
    	else if(n<m)
    		printf("NO\n");
    		else if(n==m){
    			int flag = 0,cnt = 0;
    			for(int i = 1;i<=n;i++){
    				for(int j = 1;j<=m;j++){
    					if(strcmp(p[i],e[j])==0){
    						flag = 1;
    						cnt++;
    						}
    					}
    				}
    				if(cnt%2)
    					printf("YES\n");
    					else
    						printf("NO\n");

    			}
	}
}