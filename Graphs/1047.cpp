/*22.10.2018*/
#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int main(){
	ios_base::sync_with_stdio(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<n;i++){
		cin>>a[i];
	}
	int i=1;
	while(i<n){
		i+=a[i];
		if(i==m){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}