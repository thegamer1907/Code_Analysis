#include<bits/stdc++.h>
#define vi vector<int>
#define pp pair<int,int>
#define all(x) x.begin(),x.end()
#define pb push_back
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	if(n%2==0)
	{
	  cout<<n/2<<endl;
	  for(int i=0;i<n/2;i++) cout<<2<<" ";
	  cout<<endl;
	}
	else
	{
		cout<<(n-1)/2<<endl;
		for(int i=0;i<(n-1)/2-1;i++) cout<<2<<" ";
		cout<<3<<endl;
	}
	
	


}

