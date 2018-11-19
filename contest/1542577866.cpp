#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

typedef long long ll;
using namespace std;

ll A[1000007]; ll n,k,a,b,s;

int main()
{
	cin>>n>>k;
		/*
	1
	 if(b)a+=s; s*=2;
		a=0,s=1;
		for(int j=0;j<k;j++)
		{
			cin>>b; if(b)a+=s; s*=2;
		}
		A[a]=1;
	}
	*/
	for(int i=0;i<n;i++)
	{
		a=0,s=1;
		for(int j=0;j<k;j++)
		{
			cin>>b; if(b)a+=s; s*=2;
		}
		A[a]=1;
	}

	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++)
		{
			if((!(i&j)) && A[i] && A[j] )
			{
				puts("YES"); return 0;
			}
		}
	}

	puts("NO");

}