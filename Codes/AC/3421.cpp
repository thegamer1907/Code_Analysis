#include<bits/stdc++.h>
using namespace std;
long long n;
bool ok(long long m){
	long long eat=0;
	long long N=n;
	while(N>0){
		if(N>=m){
			N-=m;
			eat+=m;
		}else{
			eat+=N;
			N=0;
		}
		N=N-N/10;
	}
	return eat*2>=n;
}
int main(){
	cin>>n;
	long long l=1,r=n;
	while(l<r){
		long long mid=(l+r)>>1;
		if(ok(mid)){
			r=mid;
		}else{
			l=mid+1;
		}
	}
	cout<<l<<endl;
}