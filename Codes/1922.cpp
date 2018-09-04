#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define ipair pair<int,int>
#define mp make_pair
#define trace1(a) cout<<a<<endl;
#define trace3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl;
#define trace2(a,b) cout<<a<<" "<<b<<endl;
#define trace4(a,b,c,d) cout<<a<<" "<< b <<" "<<c<<" "<<d<<endl; 
bool compare(ll a,ll b){
	return (a<b);
}
map<ll,ll>m;
map<ll,ll>ans;
vector<ll>a(200005);
int main(){
	int n,k;
	cin>>n>>k;
	ll sum=0;
	ll ksq=k*k;
	for(int i=0;i<n;i++){
		cin>>a[i];
		
		sum+=ans[a[i]];
		if(a[i]%k==0){
			int p=m[a[i]/k];
			if(p>0){
				ans[a[i]*k]+=p;
			}
		}
		m[a[i]]++;
	}
	
	
	cout<<sum<<endl;

}