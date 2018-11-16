#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin >> n >> t;
	char line[n];
	cin >> line;
	while(t--)
	{
		for(int i=0; i < n-1 ; i++)
		{
				if(line[i+1]=='G' && line[i] =='B')
				{
					line[i+1] ='B';
					line[i] ='G';
					++i;
				}	
		}
	}
	cout << line;
	return 0;
}