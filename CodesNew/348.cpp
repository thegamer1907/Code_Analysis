//macmurdojack
#include<bits/stdc++.h>
#define ll long long 
#define f(i,ini,last) for(long long int i=ini;i<last;i++)
#define fv(i,ini,last) for(long long unsigned int i=ini;i<last;i++)
#define M(a,value) memset(a,value,sizeof a)
#define pb(i) push_back(i)
#define acc(i) fixed<<setprecision(i)
#define mod (ll)1e9+7
#define opti ios_base::sync_with_stdio(false);cin.tie(NULL)
#define mx INT_MAX
const int Max=256;
using namespace std;

int main(){
	opti;
	ll n,t,flag=0;
	cin>>n>>t;
	ll a[n];
	f(i,0,n){
		cin>>a[i];
		if(a[i]<=t)
			flag=1;
	}
	ll max=1,count=1,sum=a[0],r=0;
	f(i,1,n){
		if(sum+a[i]<=t){
			count++;
			sum=sum+a[i];
			r=1;
		}
		else{
			sum=sum-a[i-count]+a[i];
		}
		if(count>max){
			max=count;
		}
		//cout<<max<<"(max)"<<" "<<sum<<"(sum)"<<" ";	
	}
	//cout<<endl;
	if(n==1 || flag==0){
		if(a[0]>t)
			cout<<"0"<<"\n";
		else
			cout<<"1"<<"\n";
	}
	else
		cout<<max<<endl;
	
	return 0;
}
