#include <iostream>

using namespace std;

int main()
{

	int n , t , i , j , k;

	cin>>n>>t;

	char q[50];

	for(i=0 ; i<n ; i++)
	{
		cin>>q[i];
	}

	for(j=0 ; j<t ; j++)
	{
		for(k=0 ; k<n; k++)
		{
			if(q[k]=='B' && q[k+1]=='G')
			{
				swap(q[k] , q[k+1]);
				k++;
				
			}
		}
	}

	for(i=0 ; i<n ; i++)
	{
		cout<<q[i];
	}

	return 0;
}