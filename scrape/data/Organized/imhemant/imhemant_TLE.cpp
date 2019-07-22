#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	ll n,m,k;
	cin>>n>>m>>k;
	ll p[m];
	for(ll i=0;i<m;i++){
		cin>>p[i];
	}
	sort(p,p+m);
	ll ans=0,flag=0,temp=k,count=0;
	for(ll i=0;i<m;i++){
		while(i<m&&p[i]<=temp){
			if(flag==0){
				flag=1;
				ans++;
			}
			i++;count++;
		}
		if(flag==1){
			temp+=count;
			i--;
		}
		else{
			temp+=k;
			i--;
		}
		flag=0;
		count=0;
		//cout<<ans<<" "<<i<<" "<<temp<<endl;
		
	}
	
	cout<<ans;


	return 0;
}