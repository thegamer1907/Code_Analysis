#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, l;
	double mx=0;
	
	cin>>n>>l;
	
	double A[n];
	
	for (int i=0; i<n; i++)
	{
		cin>>A[i];
	}
	
	sort(A, A+n);
	for (int i=0; i<n-1; i++)
	{
		mx=max(mx, A[i+1]-A[i] );
	}	
	
	mx=max(mx/2.0, max(A[0]-0, l-A[n-1] ) );
	
	cout<<std::fixed<<setprecision(9)<<mx<<endl;
	
	return 0;
}