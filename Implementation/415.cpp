#include<iomanip>
#include<iostream>
using namespace std;

int main(){
int a[64],i,n,j,k;
	cin>>n>>k;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	for(i=1;i<=n;i++){
		if(a[i]>=a[k] && a[i]>0) j++;
	}
	cout<<j;
return 0;
}
