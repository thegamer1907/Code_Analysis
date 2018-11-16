#include <iostream>
using namespace std;
int main(){
	int n,t;
	cin>>n>>t;
	int a[n];
	for(int i=0;i<n-1;i++) cin>>a[i];
	int flag=0;
	for(int i=0; i<n;i+=a[i]){
		if(i==t-1){
			flag=1;
			cout<<"YES\n";
			break;
		}
	}
	if(!flag) cout<<"NO\n";
}