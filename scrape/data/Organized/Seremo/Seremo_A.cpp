#include<bits/stdc++.h>
using namespace std;
unsigned long long int n,m,k;
unsigned long long int arr[200002];
int main(){
	scanf("%llu %llu %llu",&n,&m,&k);
	for(int i=m+1;i<=200001;i++) arr[i]=1e18+100;
	for(int i=1;i<=m;i++) scanf("%llu",&arr[i]);
	sort(arr+1,arr+m+1);
	unsigned long long int s=1,e=k; //1브터 인덱스 k까지 지우기
	unsigned long long int idx=0,now=0; // 이제 now까지 지움 
	unsigned long long int erased=0;
	unsigned long long int ans=0;
	while(now<m && s<=n && ans<=m){
		idx = upper_bound(arr+now+1,arr+m+1,e)-arr-1;
		erased = idx - now; now = idx;
		if(erased==0){
			s=e+1; e=s+k-1;
			if(arr[now+1]>e){
				e = arr[now+1]- ((arr[now+1]-e)%k);
			}
			if(e>=n) e=n;
		}
		else{
			ans++;
			e += erased;
			if(e>=n) e=n;
		}
		//printf("%d %d %d \n",idx,erased,e);
	}
	printf("%llu",ans);
}