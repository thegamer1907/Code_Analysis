#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<queue>
#include<stack>
#include<vector>
#include<map>
#include<set>
using namespace std;

typedef long long int LL;
const int MAXM = 100000;
const int INF = 0x3f3f3f3f;
template<class T>
void Read(T &x){
	x=0;char c=getchar();bool flag=0;
	while(c<'0'||'9'<c){if(c=='-')flag=1;c=getchar();}
	while('0'<=c&&c<='9'){x=x*10+c-'0';c=getchar();}
	if(flag)x=-x;
}

int n,k;
bool appear[20];

bool check(){
	int ed=(1<<4)-1;
	for(int s=1;s<=ed;++s){//printf("-----------\n[%d%d%d%d]\n",(s/8)&1,(s/4)&1,(s/2)&1,s&1);
		for(int ss=(s-1)&s;;ss=(ss-1)&s){
			//printf("%d%d%d%d\n",(ss/8)&1,(ss/4)&1,(ss/2)&1,ss&1);
			appear[s]|=appear[ss];
			if(!ss)break;	
		}
	}
	
	//for(int i=0;i<=ed;++i)
	//	if(appear[i])printf("%d%d%d%d\n",(i/8)&1,(i/4)&1,(i/2)&1,i&1);
	
	for(int s=0;s<=ed;++s)
		if(appear[s]&&appear[ed^s])
			return true;
	return false;
}

int main(){
	Read(n),Read(k);
	int t,sum;
	for(int i=1;i<=n;++i){
		sum=0;
		for(int j=0;j<k;++j)scanf("%d",&t),sum=(sum<<1)+t;
		for(int j=k;j<4;++j)sum<<=1;
		//printf("add %d%d%d%d\n",(sum/8)&1,(sum/4)&1,(sum/2)&1,sum&1);
		appear[sum]=true;
	}
	
	if(check())puts("YES");
	else puts("NO");
}
/*
5 3
1 0 1
1 1 0
1 0 1
1 0 1
0 1 1
*/
