#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,m,k;
	cin>>n>>m>>k;
	
	vector<long long> v;
	for(int i=0;i<m;i++){
		long long x;
		cin>>x;
		v.push_back(x);
	}
	
	if(k==1){
		cout<<m<<endl;
		return 0;	
	}
	
	long long cnt = 0;
	int si = -1;
	long long jump = k;
	long long ans = 0;
	while(cnt<m){
	
		int id = lower_bound(v.begin(),v.end(),jump) - v.begin();
		if(v[id]!=jump)
			id--;
		if(id!=-1 && id!=si){
			cnt+=(id-si);
			jump+=(id-si);
			ans++;
			si = id;
		}
		else{
			
			long long temp = (v[id+1]-cnt+k-1)%k;
			jump=(k-1-temp)+v[id+1];
			
			if(jump>=n)
				jump = n;
		}
	}
	cout<<ans<<endl;
}