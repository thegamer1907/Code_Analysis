#include<bits/stdc++.h>
#define rep(x,a,b) for(int x=a;x<=b;x++)
#define tep(x,a,b) for(int x=a;x>=b;x--)
#define LL long long
const int N=100005;
using namespace std;

char a[N];
int num[N],Q;

int main(){
	scanf("%s",a+1);
	int len=strlen(a+1);
	rep(i,1,len-1){
		if(a[i]==a[i+1])num[i]=1;
		num[i]+=num[i-1];
	}
	num[len]=num[len-1];
	scanf("%d",&Q);
	while(Q--){
		int l,r;
		scanf("%d%d",&l,&r);
		printf("%d\n",num[r-1]-num[l-1]);
	}
	return 0;
}
