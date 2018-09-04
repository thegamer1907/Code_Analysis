#include<bits/stdc++.h>
using namespace std; 
#define SelfTest freopen("/home/zz7/CFInput","r",stdin)
int ans[123450],cnt=0;
int res=0;
int P[10];
void f(int idx,int sum)
{
	if(idx==0){
		res+=(10-sum);
		ans[cnt++]=res;
		res-=(10-sum);return;
	}
	for(int i=0;i<10;i++){
		if(sum+i>10)return;
		res+=i*P[idx];
		f(idx-1,sum+i);
		res-=i*P[idx];
	}
}
int main()
{
	//SelfTest;
	int u=1;
	for(int i=0;i<10;i++)P[i]=u,u*=10;
	f(9,0);
	int n;scanf("%d",&n);
	cout<<ans[n]<<'\n';
	//for(int i=0;i<100;i++)cout<<ans[i+1]<<' ';
}

