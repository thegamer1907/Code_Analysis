#include <iostream>

using namespace std ;

int n , m , sum , maxi , ans ;

int main()
{
	cin >> n >> m ;
	
	for(int i=0 ; i<n ; i++)
	{
		int x ;
		cin >> x ;
		
		sum+=x;
		maxi = max(maxi , x);
	}
	
	ans = (n*maxi) - sum ;
	
	if(ans >= m)
		cout << maxi << " " << m+maxi ;
	
	else
	{
		ans = ((m-ans)/n) + ((m-ans)%n>0 ? 1 : 0);
	
		cout << ans+maxi << " " << maxi+m;
	}
	
	return 0;
}