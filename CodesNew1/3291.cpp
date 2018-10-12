#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	int max,min,r=0,q,d,sum=0;
	cin>>n>>m;

	int a[n];

	for(int i=0;i<n;i++){
	cin>>a[i];
	sum=sum+a[i];
	}

	sort(a,a+n);

	max=a[n-1]+m;
	sum=sum-a[n-1];
	d=(n-1)*a[n-1] - sum;

	if(d >=m )min=a[n-1];

	else 
	{
		d=m-d;
		q=d/n;
		r=d%n;

		min=a[n-1]+q;

		if(r)min=min+1;
		//cout<<d<<" "<<q<<" "<<r<<" ";

	}
	//if(n==1)min=max;

	cout<<min<<" "<<max;
}