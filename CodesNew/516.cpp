#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
vector<ll>v;
bool vis[10000001];
map<ll,ll>m;
ll arr[1000001],sm[10000001],sum[700000];
int main(){
	ios::sync_with_stdio(false);
	ll i,j,k,n,a,p,b,q,l,r,cnt=0;
	cin>>n;
	for(i=2;i<=10000000;i++){
		if(vis[i]==0){
		    sm[i]=i;
			v.push_back(i);
			m[i]=cnt;
			cnt++;
			for(j=2;j*i<=10000000;j++){
			    if(!sm[i*j])sm[i*j]=i;
				vis[i*j]=1;
			}
		}
	}
	for(i=0;i<n;i++){
		cin>>arr[i];
		a=arr[i];
		while(a!=1){
		    p=sm[a];
		    sum[m[p]]++;
		    while(a%p==0){
		        a/=p;
		    }
		}
	}
	for(i=1;i<700000;i++){
	    sum[i]+=sum[i-1];
	}
	cin>>q;
	for(i=0;i<q;i++){
	    cin>>l>>r;
	    a=lower_bound(v.begin(),v.end(),l)-v.begin();
	    b=lower_bound(v.begin(),v.end(),r)-v.begin();
	    if(a==v.size()){
	        cout<<0<<"\n";
	        continue;
	    }
	    if(b==v.size()){
	        b--;
	        cout<<sum[b]-sum[a-1]<<"\n";
	        continue;
	    }
	    if(v[b]!=r)b--;
	    if(a==0){
	        cout<<sum[b]<<"\n";
	    }
	    else{
	        cout<<sum[b]-sum[a-1]<<"\n";
	    }
	}
}