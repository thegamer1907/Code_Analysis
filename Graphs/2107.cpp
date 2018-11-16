#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,count=0;
	cin >> n >> m;
	while(n<m)
	{
		if(m%2==0)
			{m=m/2;
				count++;
			}
			else
			{
				m++;
				count++;
			}




	}
	cout << count+n-m;
	return 0;
	
	
}