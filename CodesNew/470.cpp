#include <bits/stdc++.h>
using namespace std;
long long a[1000005],i=1,l,r,n,t,m;
int main()
{
	for(cin>>n>>t; cin>>n ;++i)
	{
		a[i]=a[i-1]+n; // partial sum;
		if(a[i]-a[l] > t )l++;//if the nof minutes exceed !!
		m = max((i-l),m);//first will be 
	}
	cout<<m;
	return 0;
}
/*
    partial sum:-
    0 2 4 7
    
    2-0>3? no so mx=1-0
    4-0>3? ok so mx=2-1
    7-2>3? ok so mx=3-2
    end.
*/