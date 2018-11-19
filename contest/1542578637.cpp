#include <bits/stdc++.h>
#define MOD 1000000007LL
using namespace std;
typedef long long ll;
typedef pair<int,int> P;

int n,k;
int fie[100005][5];
bool flag[100001];

int main(void){
	scanf("%d%d",&n,&k);
	bool ans=false;
	for(int i=0;i<n;i++){
		int bit=0;
		for(int j=0;j<k;j++){
			int a;
			scanf("%d",&a);
			if(a==1)bit+=(1<<j);
		}
		if(bit==0){
			ans=true;
		}else if(flag[bit]){
			ans=true;
		}else{
			int rest=(1<<k)-1-bit;
			for(int bi=0;bi<(1<<k);bi++){
				if((rest|bi)==rest)flag[bi]=true;
			}
		}
	}
	printf("%s\n",ans?"YES":"NO");
	return 0;
}