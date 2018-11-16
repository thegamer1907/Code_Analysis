#include <iostream>
#include <stack>
using namespace std ;
int t , n ;
int a[30005];
int  dfs(int u)
{
   if(u==t)
   {
   	cout << "YES" << endl;
   	return 0;
   }
   else if(u>t)
   {
   	cout << "NO" << endl;
   	return 0;
   }
   else
    dfs(u+a[u]);
}
int main()
{   
	cin >> n >> t;
	for(int i = 1 ; i < n ; i++)
		 cin >> a[i];
	dfs(1);
	
}