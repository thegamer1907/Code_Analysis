#include<bits/stdc++.h>
#define int long long int
//#define endl '\n'
using namespace std;
main()
{
	ios::sync_with_stdio(0);cin.tie(0);
	int nn;cin>>nn;
	int l=0,r=nn,mid=(l+r)/2;
	while(true){
		if(r-l==1){cout<<r<<endl;break;}
		int n=nn,sum=0;
		while(n>=mid){
			n-=mid;sum+=mid;
			n-=n/10;
		}
		sum+=n;
		if(sum*2>=nn){r=mid;mid=(l+r)/2;}
		else{l=mid;mid=(l+r)/2;}
	}
}
