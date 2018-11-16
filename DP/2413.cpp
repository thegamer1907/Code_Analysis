#include<iostream>
using namespace std;
int h[150005];
int main (){
	int n,k,sum,ans,ansi;
	cin>>n>>k;
	for (int i=1;i<=n;i++)
		cin>>h[i];
	sum=0;
	for (int i=1;i<=k;i++)
		sum+=h[i];
	ans=sum;
	ansi=1;
	for (int i=2;i<=n-k+1;i++){
		sum-=h[i-1];
		sum+=h[i+k-1];
		if (sum<ans){
			ans=sum;
			ansi=i;
		}
	}
	cout<<ansi;
	return 0;
}
