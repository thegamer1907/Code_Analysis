#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	long long n,m,k;
	cin>>n>>m>>k;
	vector<long long > v;
	for(int i=0;i<m;i++){
		long long temp;
		cin>>temp;
		v.push_back(temp);
	}
	long long upperBoundLimit=k;
	long long initial=0;
	long long aa=upper_bound(v.begin(),v.end(),upperBoundLimit)-v.begin();
	long long ans=0;
	long long removed=0;
	long long currentRemoved=aa;
	while(removed!=m){
		if(currentRemoved==0){
			upperBoundLimit+=k;
		}
		currentRemoved=upper_bound(v.begin(),v.end(),upperBoundLimit)-v.begin()-initial;
		if(currentRemoved!=0){
			removed=removed+currentRemoved;
			initial=currentRemoved+initial;
			ans++;
			upperBoundLimit=upperBoundLimit+currentRemoved;
		}	

	}	
	cout<<ans;



	return 0;
}