#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,k,m;
	cin>>n>>k;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int c=0;
	for(int i=0;i<n;i++)
		if(v[i]>=v[k-1] && v[i]>0)
			c++;
	cout<<c<<endl;

}
