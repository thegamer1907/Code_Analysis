#include <iostream>
using namespace std;
int a[100001],w[1000001];
int main(){
	int n,m,q;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]=a[i]+a[i-1];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>q;
		int l=1,r=n,mid=0;
		while(l<r){
			mid=(l+r)/2;
			if(a[mid]<q){
				l=mid+1;
			}
			else{
				r=mid;
			}
		}
		cout<<r<<endl;
	}
	
	return 0;
}