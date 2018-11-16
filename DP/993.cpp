#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MAXN = 1e3;
int ar [ MAXN ];
int zeroones(int i , int j)
{
	int ones = 0 , zeros = 0;
	for( ; i <= j ; i++)
	{
		if(ar [ i ] == 0)
			zeros++;
		else {
			ones++;
		}	
	}
	return zeros - ones;
}
int main() {
	ios::sync_with_stdio(false) , cin.tie(0) , cout.tie(0);
	int n , one = 0;
	cin >> n;
	int max1 = -1;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> ar [ i ];
		if(ar [ i ] == 1)
			one++;
	}		
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = i ; j < n ; j++)
			max1 = max(max1 , zeroones( i , j ));
	}	
	cout << max1 + one;
}