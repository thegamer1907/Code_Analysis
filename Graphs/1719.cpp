#include<iostream>
using namespace std;
int a[30005],n,c,t;
int main(){
	cin>>n>>t;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(c=1;c<t;c=c+a[c]);
	
	if (t==c)cout<<"YES";else cout<<"NO";

}