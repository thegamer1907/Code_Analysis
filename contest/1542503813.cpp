#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int cnt[50],x;
	for(int i=0;i<50;i++){
		cnt[i]=0;
	}
	int p=k-1;
		
	int arr[n+1][k+1];
	for(int i=0;i<n;i++){
		int sum=0;
		p=k-1;
		x=pow(2,p);
		for(int j=0;j<k;j++){
			cin>>arr[i][j];
			sum=sum+pow(2,p)*arr[i][j];
			p--;
		}
		cnt[sum]++;
	}
	if(cnt[0]>=1){
		cout<<"YES";
		return 0;
		
	}
	int flag=0;
	for(int i=0;i<(1<<k);i++){
		for(int j=i+1;j<(1<<k);j++){
			if((i&j)==0 && cnt[i]!=0 && cnt[j]!=0){
				flag=1;
			}
		}
	}
	if(flag){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}