#include<bits/stdc++.h>
using namespace std;
const int mx=2e2;
int n, s[mx], cnt1;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
		if(s[i]){
			cnt1++;
		}
	}
	if(cnt1==n){
		cout<<n-1;
		return 0;
	}
	int minn=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			int cnt=0;
			for(int r=i;r<=j;r++){
				if(s[r]){
					cnt++;
				}
				else{
					cnt--;
				}
			}
			if(cnt<minn){
				minn=cnt;
			}
		}
	}
	int q=cnt1+abs(minn);
	if(q<cnt1+1){
		q=cnt1+1;
	}
	cout<<q;
	return 0;
}
