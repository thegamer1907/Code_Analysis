#include <bits/stdc++.h>
#define  f(i,k,j) for(i=k;i<j;i++)
using namespace std;

int main()

{
	
	string x;  cin>>x;
	
	int n,i,j;  cin>>n; 
	
	string s[n],c; string p;

	for(int i=0;i<n;i++)
		{
			cin>>s[i]; 
		}

		f(i,0,n) f(j,0,n) p += s[i]+s[j];

	if (p.find(x) != std::string::npos)
	{
	 {cout<<"YES"; return 0;}
		
	}

    

	cout<<"NO";

}