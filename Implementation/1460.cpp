#include<iostream>
using namespace std;

int main()
{
	int n, t;
	cin>>n>>t;
	char a[n]; 
	
	for (int i = 0; i<n;i++)
	{
		cin>>a[i];
	}

	for (int i = 0; i<t;i++)
	{
		for (int j = 0; j<n-1; j++)
		{
			if (a[j] == 'B' and a[j+1] == 'G')
			{
				char tmp = a[j+1];
				a[j+1] = a[j];
				a[j] = tmp;
				j++;
			}
		}
	}

	for (int i = 0; i<n;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
}


