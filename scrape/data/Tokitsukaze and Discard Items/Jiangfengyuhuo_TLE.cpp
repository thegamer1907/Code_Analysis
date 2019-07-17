#include<bits/stdc++.h>
using namespace std;
const int maxn =100110;
long long del[maxn];



int main(){
	long long n,m,k;
	scanf("%lld%lld%lld",&n,&m,&k);
	for(int i=1;i<=m;i++) scanf("%lld",&del[i]);
	long long p,t,step=0,end;
	p=1;t=1,end=p+k-1;
	while(p<=n&&t<=m){
		long long numd =0;
	int flag=0;
	while(t<=m){
		if(del[t]<=end){
		numd++;
		t++;
		flag=1;
		}
		else {
		end=end+numd;
		break;
		}
	}
	if(flag){
	step++;
	}
	else {
	p=end+1;
	end=p+k-1;
	if(del[t]>end){
		long long tp=del[t]-t+1;//前面删除了t-1个数,del实际位置在del[t]-t+1的位置上 
		
		//p=k*(del[t]/k)+p%k-k;
		if(tp%k==0) p=k*(tp/k)-k+1;
		else p=k*(tp/k)+1;
			
		end=p+k-1;
	}

}
}
	cout<<step;
	return 0;
}