#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
int f[66];
int main(){
    int i,j,k,l,m,n,tmp,num;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        num=0;
        for(j=k-1;j>=0;j--){
            scanf("%d",&tmp);
            if(tmp) num+=(1<<j);
        }
        f[num]=1;
    }
    for(i=0;i<(1<<k);i++){
        for(j=0;j<(1<<k);j++){
            if((i&j)==0&&f[i]&&f[j]) 
			{
				printf("YES\n");
				return 0;
			}
        }
    }
	printf("NO\n");
    return 0;
}