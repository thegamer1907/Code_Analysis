#include <iostream>
using namespace std;
int main(){
	int a[30000],n,t;
	cin>>n>>t;
	for(int i=1;i<n;i++) cin>>a[i];
	int i;
	for(i=1;i<t;i+=a[i]) ;
	if(i==t) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}