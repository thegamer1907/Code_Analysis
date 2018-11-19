#include<bits/stdc++.h>
using namespace std;
int freq[16];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,k,x,s;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		x=0;
		for(int i=0;i<k;i++){
			cin>>s;
			x*=2;
			x+=s;
		}
		freq[x]++;
	}
	if(freq[0]>0){
		cout<<"YES\n";
		return 0;
	}
	for(int i=(1<<k)-1;i>0;i--)
		for(int j=i-1;j>=0;j--)
			if((i^j)==(i+j)&&freq[i]>0&&freq[j]>0){
				cout<<"YES\n";
				return 0;
			}
	cout<<"NO\n";
	return 0;
}