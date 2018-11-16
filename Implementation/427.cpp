#include<iostream>
using namespace std;
int main(){
	int n,k,c,i;
	cin>>n>>k;int a[n];
	for(i=1;i<=n;i++)
	cin>>a[i];c=0;
	for(i=1;i<=n;i++){
		if(a[i]>=a[k]&& a[i]>0)
		c++;
	}
	cout<<c<<endl;
	return 0;
}
