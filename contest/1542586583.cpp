#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string pass;
	int flag=0;
	cin >>pass;
	int n;
	cin  >> n;
	string data[n];
	for(int i=0; i<n; i++)
		cin >> data[i];
	for(int i=0; i<n; i++)
	{
		if(data[i][1]==pass[0])
		{
			for(int j=0; j<n; j++)
			{
				if(data[j][0]==pass[1])
				{
					flag=1;
					break;
				}
			}	
		}
		if(data[i][0]==pass[0] && data[i][1]==pass[1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
	return 0;
}
