#include<iostream>
using namespace std;
int main(){
	int n,k,flag=0;
	cin>>n>>k;
	if(k==n)
{	cout<<"YES";
	return 0;
}
	int a[n];
	for(int i=0;i<n-1;i++)
	cin>>a[i];
	for(int i=0;i<n-1;){
		if(i==k-1)
		 {flag=1;
		 break;
	}
		i=i+a[i];
	}
	flag==1?cout<<"YES":cout<<"NO";
}