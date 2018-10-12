#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n,d[500005];
	int k=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>d[i];
	sort(d,d+n);
	for(int i=0;i<n;i++)
	{
		if(d[i]>=2*d[k])
			k++;
	}
	cout<<n-min(k,n/2)<<endl;;
    return 0;
}