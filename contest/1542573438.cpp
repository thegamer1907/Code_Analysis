#include <iostream>
#include <map>
using namespace std;
#define ll long long
int main(){
	ll n,k;cin>>n>>k;
	map<ll,int> pres;
	for(int i=0;i<n;i++){
		ll no=0;
		for(int j=0;j<k;j++){
			int x;cin>>x;
			if(x)no+=(1<<(j));
			// cerr<<no <<x<<" "<<(1<<j)<<"*";
		}
		if(no==0)return cout<<"YES",0;
		// cerr<<no<<"*"<<endl;
		for(int i=0;i<(1<<k);i++){
			if((i&no)==0){
				// cerr<<i<<endl;
				if(pres[i])return cout<<"YES",0;
			}
		}
		pres[no]=1;
	}
	cout<<"NO";
	return 0;
}