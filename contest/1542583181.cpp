#include <iostream>
#include <cstdio>
using namespace std;
const int MAXN=100005;
int n,K;
bool M[16];
int main(){
	int s,t;
	cin>>n>>K;
	for(int i=1;i<=n;i++){
		s=0;
		for(int j=1;j<=K;j++)cin>>t,s=s*2+t;
		M[s]=1;
	}
	bool flag[4]={},f=0;
	for(int i=0;i<16;i++)if(M[i])
		for(int j=0;j<4;j++)if(!((1<<j)&i))flag[j]=1;
	if(flag[0]&&flag[1]&&flag[2]&&flag[3]){
		if(M[0]||M[1]||M[2]||M[4]||M[8])puts("YES");
		else{
			for(int i=0;i<8;i++)if(M[i]&&M[15-i]){puts("YES");f=1;break;}
			if(!f)puts("NO");
		}
	}else puts("NO");
	return 0;
}
