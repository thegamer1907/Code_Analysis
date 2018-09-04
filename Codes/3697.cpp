//19:28
#include<bits/stdc++.h>
using namespace std;
#define ll long long
char A[123];
int U[3];
int main()
{
//	freopen("/home/zz7/CFInput","r",stdin);
	scanf("%s",A);int l=strlen(A);
	for(int i=0;i<l;i++){
		if(A[i]=='B')U[0]++;
		else if(A[i]=='S')U[1]++;
		else U[2]++;
	}int b,s,c,pb,ps,pc;ll p;
	scanf("%d%d%d",&b,&s,&c);
	scanf("%d%d%d%lld",&pb,&ps,&pc,&p);
	ll L=0,R=1e12+123;
	while(L<R){
		ll M=L+R>>1,sum=0;
		sum+=max((M*U[0]-b)*pb,(ll)0);
		sum+=max((M*U[1]-s)*ps,(ll)0);
		sum+=max((M*U[2]-c)*pc,(ll)0);
		if(sum>p)R=M;
		else L=M+1;
	}cout<<R-1<<'\n';
}
