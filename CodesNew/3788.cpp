#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n];
	memset(a,0,sizeof(a));
	int Max=-1,Min=10000;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	Max=a[n-1]+m;
	int sum=0;
	int flag=0;
	for(int i=1;i<n;i++){
		sum+=(a[i]-a[i-1])*i;
		if(m<=sum){
			flag=1;
			Min=a[n-1];
			break;
		}
	}
	if(!flag)Min=a[n-1]+((m-sum)%n?(m-sum)/n+1:(m-sum)/n);
	cout<<Min<<" "<<Max<<endl;
	
} 
