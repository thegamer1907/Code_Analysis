#include<iostream>
using namespace std;
int piles[100010];
int findPile( int w, int i, int j )
{
	if(i==j)
		return i;
	else
	{
		int m = (i+j)/2;
		if( w < piles[m+1] )
			return findPile( w, i, m );
		else
			return findPile( w, m+1, j );
	}
}
int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int sum = 0;
	piles[1] = 1;
	for(int i = 1; i <= n; i++)
	{
		int temp;
		cin >> temp;
		piles[i+1] = piles[i] + temp;
	}
	int m;
	cin >> m;
	for(int i = 1; i <= m; i++)
	{
		int worm;
		cin >> worm;
		cout << findPile(worm,1,n) << '\n';
	}
	return 0;
}