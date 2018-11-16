#include<iostream>
#include <algorithm>
#include<queue>
#include<vector>
#include<set>
using namespace std ;
long long known[100000] ;
int main()
{
	int n , m , min = 1e6 ;
	vector<int> v ;
	bool y = true , z = true ;
	int a , b ;
	bool bb = 0 ;
	cin >> n >> m ;
	
	if ( n > m )
	{
		cout <<  n - m << endl ; 
		return 0;
	}
	else
	{
		int x = 0 ;
		queue<pair<int,int>> q ;
		q.push(make_pair(n,0));
		known[n] = 1 ;
		while(!q.empty())
		{
			
			a = q.front().first ;
			b = q.front().second ;
			if ( a*2 == m )
			{
				v.push_back(b+1);
				break;
			}
			if ( a*2 < m && !known[a*2] )
			{
				q.push(make_pair(a*2,b+1));
				known[a*2] = 1 ;
			}
			else if ( !known[a*2] )
			{
				v.push_back((b+1)+((a*2)-m));
			}

			if ( a-1 != 0 && known[a-1] == 0 )
			{
				q.push(make_pair(a-1,b+1));
				known[a-1] = 1 ;
			}
			q.pop() ;
		}
	}

	

	sort(v.begin() , v.end() ) ;
	cout  << v[0] << endl;

	return 0;
}
