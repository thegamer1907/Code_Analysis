#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	vector<int> vec(n);
	for(int i=0; i<n;i++)cin>>vec[i];
	sort(vec.begin(),vec.end());
	int mx,mn=0,tempk=k;
	mx=vec.back();
	int i=1;
	while(k>=(vec[i]-vec[i-1])*i && i<n  && k>0){
		k-=(vec[i]-vec[i-1])*i;
		mn=i;
		i++;
	}
	mn=vec[mn]+ceil(1.0f*k/i); 
	mn= max(mn,mx);
	cout<<mn<<" "<<mx+tempk;
	return 0;
}