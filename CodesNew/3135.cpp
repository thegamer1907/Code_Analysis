#include <bits/stdc++.h>
using namespace std;

int n , k , dp[1000000][2];
vector<int> v , nxtwith , nxtwithout , zeros; 
void print(){
	for(int i=0;i<n;i++)
		cout<<zeros[i]<<" ";
	cout<<endl;
	for(int i=0;i<n;i++)
		cout<<nxtwithout[i]<<" ";
	cout<<endl;
	for(int i=0;i<n;i++)
		cout<<nxtwith[i]<<" ";

}
int bs(int i){
	if(k==0)
		return i-1;
	int l = i , r = n-1 , mid , ans , last;
	if(i==0)
		last=0;
	else
		last=zeros[i-1];
	while(l<=r){
		mid=(l+r)/2;
		if(zeros[mid]-last <= k){
			ans = mid;
			l=mid+1;
		}else
			r=mid-1;
	}
	return ans;
}
int main(){
	cin >> n >> k;
	v.resize(n) , nxtwith.resize(n) , nxtwithout.resize(n) , zeros.resize(n);
	for (int i = 0; i < n; ++i){
		cin >> v[i];
		if(!i)
			zeros[i]=(!v[i]);
		else
			zeros[i]=zeros[i-1]+(!v[i]);	
	}
	for(int i=n-1;i>=0;i--){
		if(i==n-1)
			nxtwithout[i]=v[i];
		else{
			if(v[i]==1)
				nxtwithout[i]=1+nxtwithout[i+1];
			else
				nxtwithout[i]=0;
		}
	}
	for(int i=0;i<n;i++)
		nxtwith[i]=bs(i)-i+1;
	int result = 0 , pos = 0;
	for(int i=0;i<n;i++){
		dp[i][1]=dp[i+nxtwith[i]][0]+nxtwith[i];
		dp[i][0]=nxtwithout[i];
		if(result < dp[i][0]){
			pos=i;
			result=dp[i][0];
		}
		if(result < dp[i][1]){
			pos = i;
			result = dp[i][1];
		}
	}
	cout<<result<<endl;
	for(int i=0;i<n;i++){
		if(i>=pos && k > 0 && (!v[i])){
			k--;
			cout<<1<<" ";
		}else
			cout<<v[i]<<" ";
	}
	return 0;
}