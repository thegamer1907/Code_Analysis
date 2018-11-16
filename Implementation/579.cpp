#include <bits/stdc++.h>
using namespace std;
 
int main() 

{
 
	int n,i,k,res=0 ;
	cin>>n>>k;
	vector<long> vec(n);

	for(i=0; i<n; i++)
	{
		cin>>vec[i];
	}
 

	for (i=0; i<n ; i++)  

		{ 
			if(vec[i]>=vec[k-1]  && vec[i]>0 )  res++;
		}

	
	cout<<res<<endl;
	return 0;
}
	