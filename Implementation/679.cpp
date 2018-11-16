#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,k,m=0;
	cin>>n>>k;
	long long a[n];
	for(int i=0; i<n;i++)
	{
		cin >>a[i];
		
	}	
	sort(a,a+n);
	if(a[n-1]==0) {
		cout <<"0"<<endl;
		return 0;
	}
	long long t = a[n-k],count=0;
	//cout <<t<<" t"<<endl;
	for(int i=(n-k-1); i>=0;i--){
		if(a[i]==t){
		//	cout<<a[i]<<" "<<i<<endl;
			count++;
		}
	}
	for(int i= (n-(k+count)); i<n; i++){
		if(a[i]==0)
		m++;
	}
	cout <<(k+count-m)<<endl;
	return 0;
}