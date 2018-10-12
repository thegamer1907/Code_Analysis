#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	int i,j,k,l=0,n,m,mx,mn;
	cin>>n>>m;
	int ar[n];
	for(i=0;i<n;i++){
		cin>>ar[i];
		if(ar[i]>l) l=ar[i];
	}
	mx=m+l;
	for(i=0;i<m;i++){
		k=10000; l=0;
		for(j=0;j<n;j++){
			if(ar[j]<k){
				k=ar[j];
				l=j;
			}
		}
		ar[l]++;
	}
	k=0; l=0;
	for(j=0;j<n;j++){
		if(ar[j]>k){
			k=ar[j];
			l=j;
		}
	}
	cout<<ar[l]<<" "<<mx;
	return 0;
}