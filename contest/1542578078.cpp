#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>

using namespace std;
const int MX=1<<4|1;
int c[MX];

int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		int SS=0;
		static int t;
		for(int j=0;j<k;j++)scanf("%d",&t),SS|=(t<<j);
		++c[SS];
	}
	int S=1<<k;
	for(int i=1;i<(1<<S);i++){
		bool flg=true;
		for(int j=0;j<S;j++)if(((i>>j)&1)&&!c[j]){flg=false;break;}
		int d[5]={0};
		for(int j=0;j<S;j++)if((i>>j)&1){
			for(int l=0;l<k;l++)d[l]+=((((j>>l)&1)<<1)-1);
		}
		for(int j=0;j<k;j++)if(d[j]>0){flg=false;break;}
		if(flg)return puts("Yes"),0;
	}
	puts("No");
	return 0;
}
