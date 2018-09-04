#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define ipair pair<ll,ll>
#define mp make_pair
#define trace1(a) cout<<a<<endl;
#define trace3(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl;
#define trace2(a,b) cout<<a<<" "<<b<<endl;
#define trace4(a,b,c,d) cout<<a<<" "<< b <<" "<<c<<" "<<d<<endl; 
bool compare(ll a,ll b){
	return (a<b);
}

vector<ll>a(100005);
ll calnum(ll k,int n){
	vector<ll>b(n+1);
	for(int i=0;i<n;i++){
		b[i]=a[i]+(i+1)*k;
	}
	sort(b.begin(),b.begin()+n);
	ll sum=0;
	for(int i=0;i<k;i++){
		sum+=b[i];
	}
	return sum;

}
int main(){
 	int n;
 	ll s;
 	cin>>n>>s;
 	
 	for(int i=0;i<n;i++){
 		cin>>a[i];
 	}
 	ll start=-1,end=n+1,mid,sum;
 	while(end-start>1){
 		mid=(end+start)/2;
 		sum=calnum(mid,n);
 		if(sum<=s) start=mid;
 		else end=mid;

 	}
 	trace2(start,calnum(start,n));

}