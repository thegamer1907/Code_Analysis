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
int findkpos(ll start,ll end,ll k,ll n){
	if(start>end) return -1;
	ll mid=(start+end)/2;
	if(k<mid) return findkpos(start,mid-1,k,n-1);
	else if(k>mid) return findkpos(mid+1,end,k,n-1);
	else return n;
}
int main(){
	ll n,k;
	cin>>n>>k;
	ll n1=(1ll<<n)-1;
	if(k%2==1) {trace1("1");}
	else{
		cout<<findkpos(1,n1,k,n);
	}
}