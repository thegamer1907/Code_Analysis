#include <iostream>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int index=0;
	int sum=0;
	
	for (int i=0;i<m;i++){
		sum=sum+a[i];
	}
	int mini=sum;
	for (int i=1;i<n-m+1;i++){
			sum=sum-a[i-1]+a[m+i-1];
		if (mini>sum){
			mini=sum;
			index=i;
		}
	}
	cout<<index+1;
	
}