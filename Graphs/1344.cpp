
// Author : Mohamed Sameh
#include<bits/stdc++.h>
using namespace std ;

typedef long long ll ;
typedef pair <int,int> P2i ;

#define pb push_back
#define f first
#define s second
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
///#Read And Write  From File
/*

freopen("fruits.in","r",stdin);
freopen("out.txt","w",stdout);

*/

inline int ReadInt ()
{

int t ;
scanf ("%d", &t) ;
return t ;
}
inline void Print (int t )
{
printf("%d\n",t); 
}
const int Max = 3 * 1e4 + 9 ;
int a [Max];
int main ()
{
	bool ok =0; 
	int n , t , cur =1 ; 
	cin >> n >> t ; 
	
	for (int i =0 ; i < n - 1 ; i++)
		cin >> a [i];
	for (int i =0 ;i < n ; i++)
	{
		if (cur==t)
		{
			ok = 1 ; 
			break; 
		}
		if (cur>=n)break; 
		
		cur+=a[cur-1]; 
	}
	cout << (ok?"YES\n":"NO\n");
return 0 ; 		
}



