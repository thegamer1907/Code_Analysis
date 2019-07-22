#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,m,k; cin>>n>>m>>k;
	ll arr[m];
	for(ll i=0;i<m;i++) cin>>arr[i];
	sort(arr,arr+m);
	ll pgsize = k, cnt = 0, sol = 0, i = 0, ind = 2;
	while(i<m){
	    if(arr[i] <= pgsize) cnt++,i++;
	    else{
	        if(cnt == 0){
	            ll c = ceil((double)(arr[i]-pgsize)/(double)k);
	            pgsize += c*k;
	        }
	        else{
	            sol++;
	            pgsize += cnt;
	            cnt = 0;
	        }
	    }
	}
	if(cnt>0) sol++;
	cout<<sol<<endl;
	return 0;
}