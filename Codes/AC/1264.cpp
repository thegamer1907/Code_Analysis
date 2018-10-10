# include <bits/stdc++.h>
using namespace std;
set < string > a ;
set < string > c;
set < string > b;
int main()
{
	string s;
	int n , m , i , j , l ;
	cin >> n >> m;
	for ( i = 1 ;i <= n; i++)
    {
    	cin >> s;
        a.insert(s);  	
    }
    for ( i = 1 ; i<= m ;i++)
    {
    	cin >> s;
    	( a.find(s) != a.end() ) ?  c.insert(s) : b.insert(s); 
    }

    int a1 , b1 , c1;
    a1 = a.size() - c.size();
    c1 = c.size();
    b1 = b.size();
    //cout << a1 << " " << c1 << " " << b1 << endl;
    if (!(c1&1))
    	( a1 > b1) ? cout << "YES" << endl : cout << "NO" << endl ;
    else
    {
    	( b1 > a1) ? cout << "NO" << endl : cout << "YES" << endl;
    }
    return 0;
}