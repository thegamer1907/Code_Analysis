#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int n;
	cin>>n;

	int min_loop=1e9;
	int a[112345];

	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<i){
			cout<<i<<endl;
			return 0;
		}
		min_loop = min(min_loop,(a[i]-(i-1)+(n-1))/n);
	}

	for(int i=1;i<=n;i++){
		if((a[i]-(i-1)+(n-1))/n == min_loop){
			cout<<i<<endl;
			return 0;
		}
	}



	return 0;
}
