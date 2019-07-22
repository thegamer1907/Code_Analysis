#include<iostream>
#include<algorithm>
#include<cmath>
using namespace::std;

int main(){
	ios_base::sync_with_stdio(0);
	long long int m,n,k;
	cin>>m>>n>>k;

	long long int ar[n];
	for(int i=0;i<n;i++)
		cin>>ar[i];

	long long int t=((ar[0]-1)/k +1)*k,step=0;

	for(long long int i=0,last=0;i!=n;last=i,++step){
		//for(;i<n && ar[i]<=t+last;i++);
		i=upper_bound(ar,ar+n,t+last)-ar;
		if(i!=n && ar[i]>t+i) t=k*((ar[i]-i-1)/k+1);
		//cout<<i<<' '<<t<<'\n';
	}

	cout<<step<<'\n';
}