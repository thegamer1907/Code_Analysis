#include <bits/stdc++.h>
using namespace std;
int bin(int A[], int l, int r, int key)
{
    int m;
 
    while( r - l > 1 )
    {
        m = l + (r - l)/2;
 
        if( A[m] >= key )
            r = m;
        else
            l = m;
    }
 
    return r;
}
int main(){	
	int n,a[100005];
	cin>>n;
	a[0]=-1000000;
	cin>>a[1];
//	cout<<a[1]<<" ";
	for(int i=2;i<=n;i++)cin>>a[i],a[i]+=a[i-1];//cout<<a[i]<<" ";
	//cout<<endl;
	a[n+1]=1000000;

	int m,t;
	cin>>m;
	while(m--){
		cin>>t;		
		cout<<bin(a,0,n+1,t)<<endl;

	}


	return 0;
}