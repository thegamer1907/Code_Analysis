#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i , j;
	int c = 0;
	int k = 0;
	int A[102] ,B[103];
    int n, m ;
    cin>>n;
    for( i = 0; i < n; i ++)
    	cin>>A[i];
    cin>>m;
    for( j = 0; j < m ; j++)
        cin>>B[j];
    sort(A , A+n);
    sort(B , B +m);
    for( i = 0; i < n; i++)
    {
    	for( j = k ; j < m ; j++)
    	{
    		if( B[j] - A[i] == -1 || B[j] - A[i] == 1 || B[j] - A[i] == 0)
    		{
             	c++;
    		    k = j + 1;
    		    break;
    		}
    	}
    }
    cout<<c;
  return 0;

}