using namespace std;
#include <bits/stdc++.h>
#include <map>
#include <iterator>
vector <char> v ;
int main()
{
	int n,t;
	cin>>n;
	cin>>t;
	char a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	
while(t--)
 {  
	for(int i=0;i<(n-1);i++)
	{
		if(a[i]<a[i+1])
		{
			swap(a[i],a[i+1]);
			i=i+1;
		}
	}
	
}

//cout<<sizeof(a)/sizeof(a[0])<<endl;

for (int i = 0; i < n; i++)
 {
	cout<<a[i];
 }
 cout<<endl;
}