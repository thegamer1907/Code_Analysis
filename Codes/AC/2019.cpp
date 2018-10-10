#include<bits/stdc++.h>
using namespace std;

const int maxn=2e5;
map <long long ,long long > Q;
long long n,k,temp,fr[maxn+10],fl[maxn+10],a[maxn+10],ans;

int main(){
	cin>>n>>k;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	for (int i=0;i<n;i++){
		if (a[i]%k==0){
			fl[i]=Q[a[i]/k];
		}
		Q[a[i]]++;
	}
	Q.clear();
	for (int i=n-1;i>=0;i--){
		fr[i]=Q[a[i]*k];
		Q[a[i]]++;
	}
	for (int i=0;i<n;i++){
		//cout<<fr[i]<<" "<<fl[i]<<endl;
		ans+=fr[i]*fl[i];
	}
	cout<<ans<<endl;
	return 0;
}