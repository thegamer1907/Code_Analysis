#include <iostream>
using namespace std;

int main() {
	int n,a[100000],t;
	cin>>n>>t;
	for(int i=0;i<n;i++)
	    cin>>a[i];
	if(t==1)
	{
	    cout<<"YES"<<endl;
	}
	else
	{
	    int s=1;
	    while(s+a[s-1]<=t)
	    {
	        s=s+a[s-1];
	        if(s==t)
	            break;
	    }
	    if(s==t)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
