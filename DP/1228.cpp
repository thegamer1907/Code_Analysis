#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
	ll n,i,j,k,a[1000],m=0,M=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
		m+=a[i];
	}
	M = m;
	ll one=0,sum=0,s;
	//finding max number of 1's
	for(i=1;i<=n;i++){
		m-=a[i-1];
		for(j=0;j<i;j++){
			one+=a[j];
		}
		//cout<<"one = "<<one<<endl;
		s=one;
		for(j=0;j<i;j++){
			one-=a[j];
			sum=0;
			for(k=0;k<=j;k++){
				//if(a[k]==0) sum++;
				if(a[k]==0) sum++;
				M = max(M,m+sum+one); 
			}
		}
		one = s;
		for(j=i-1;j>=0;j--){
			one-=a[j];
			sum=0;
			for(k=j;k<=i-1;k++){
				if(a[k]==0) sum++;
				// if(a[k]) sum--;
				// else sum++;
				M = max(M,m+sum+one);
			}
		}
	}
	one=0;
	for(i=0;i<n;i++){
		one+=a[i];
	}
	if(one == n) M = n-1;
	cout<<M<<endl;
	return 0;
}