#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	int ans=0;
	for(int i=1,p,q;i<=n;i++){
		cin>>p>>q;
		if(p+2<=q)ans++;
	}
	cout<<ans<<endl;
	return 0;
}
