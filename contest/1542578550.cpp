#include<cstdio>
#include<cstring>
using namespace std;
const size_t maxn=200;
int n,k;
bool judge[maxn];
int main(){
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;++i){
		int tmp=0;
		int x;
		for(int j=1;j<=k;++j){
			scanf("%d",&x);
			tmp=(tmp<<1)+x;
		}
		judge[tmp]=1;
	}
	for(int i=0;i<=16;++i){
		for(int j=0;j<=16;++j){
			if(judge[i]==1&&judge[j]==1&&(!(i&j))){
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
	return 0;
}