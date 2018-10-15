#include<iostream>
using namespace std;
int main(){
	int n,m,s=0,mx=0,x;
    cin>>n>>m;
	for(int i=1;i<=n;i++) 
	{
	    cin>>x;
	    s+=x;
	    mx=max(x,mx);
	}
	cout<<max(mx,(s+m-1)/n+1)<<" "<<mx+m;
	return 0;
}