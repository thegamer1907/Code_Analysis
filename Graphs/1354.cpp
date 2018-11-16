#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	int v[1234567];
	for(int i=1;i<=n-1;++i){
		cin>>v[i];
	}
	int ans=1,flag=0;
	// ans+=v[0];
	// int i=0;
	while(ans<=n-1){
		// ans=0;
// 		cout<<ans<<endl;
		ans+=v[ans];
		if(ans==k){
			flag=1;
			break;
		}
		if(ans>k)
		break;
	}
	if(flag)
	cout<<"YES";
	else
	cout<<"NO";
}