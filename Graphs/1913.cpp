#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int ar[1005],sum1=0,arr[1005];
int main(){
	int n,i,j,m;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>ar[i];
	}
	cin>>m;
	for(i=1;i<=m;i++){
		cin>>arr[i];
	}
	sort(ar+1,ar+1+n);
	sort(arr+1,arr+1+m);
	i=1;
	j=1;
	while(i<=n&&j<=m){
		if(abs(ar[i]-arr[j])<=1){
			i++;
			j++;
			sum1++;
		}
		else{
			if(ar[i]>arr[j]){
				j++;
			}
			else{
				i++;
			}
		}
	}
	cout<<sum1;
}