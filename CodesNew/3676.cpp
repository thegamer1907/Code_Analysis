#include<bits/stdc++.h>
using namespace std;
int n;
int m;
int a[1<<7];

int min_k,max_k;
bool ok(int ask)
{
    int need=0;
    for ( int i = 0 ; i < n ; i ++ ) 
    {
        if (a[i]>ask)
        {
            return false;
        }
        if ( ask > a[i] ) 
        {
            need+=ask-a[i];
        }
    }
    if (need>=m)
    {
        return true;
    }
    return false;
}
void read(void)
{
	cin >> n ; 
	cin >> m ; 
	for ( int i = 0 ; i < n ; i ++ ) 
	{
	    cin >> a [ i ] ; 
	}
}
void solve(void)
{
	for ( int i = 0 ; i < n ; i ++ ) 
	{
	    max_k=max(max_k,a[i]+m);
	}
	for (int k=1;k<=10100;k++)
	{
	    if (ok(k))
	    {
	        min_k=k;
	        break;
	    }
	}
}
void print(void)
{
	cout << min_k << " " << max_k << endl ; 
}
int main()
{
	read();
	solve();
	print();
	return 0;
}