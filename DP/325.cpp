#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n; cin>>n;
	int a[n];
	for (int i = 0; i<n; i++)
	{
		cin>>a[i];
	}
	
	int m; cin>>m;
	int b[m];
	for (int i = 0; i<m; i++) 
	{
		cin>>b[i];
	}

	sort(b,b+m);
	sort(a,a+n);
	int count=0;
	for (int i =0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			if (abs(a[i]-b[j] )<=1)
			{
				b[j] = 10000;
				count++;
				break;
			}
		}
	}
	cout<<count<<endl;
}	

