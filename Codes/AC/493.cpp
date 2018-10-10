#include<bits/stdc++.h>
using namespace std;
int k;
int main()
{
	cin >> k;
	int a = 19;
	int i=1;
	
	while(i<k)
	{
		int s=1;
		while(1)
		{
			if((a/s)%10==0)
				s*=10;
			else
				break;	
		}
		if((a/s)%10==1)
			{
				if((a/(s*10))%10==9)
					{
						a+=9*s+9;
						i++;
					}
				else
				{
					a+=9*s;
					i++;
				}
						
			}
		else
			{
				a+=(10-((a/s)%10))*s+((a/s)%10)-1;
				i++;
			}	
		
	}
	cout << a << endl;		
	return 0;
	
}
