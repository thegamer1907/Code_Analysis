
// Author : Mohamed Sameh
#include<bits/stdc++.h>
//#include<iostream>
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
string S ; 
int n ;
bool ab , ba ; 
bool Find (int i , string k )
{
	for ( ; i+1 < n ; i++)
	{
		if ( S.substr(i,2) == k)
		{
			return true ; 
		}
	}
	return false ; 
}
bool Solve()
{
	for (int i = 0 ;i+1 < n ; i++)
		{
			if (S.substr(i,2) == "AB")
			{
				ab = 1; 
				ba = Find (i+2,"BA");
				break;  
			}
		}
		if (ab&&ba)return true ; 
		ab = ba = 0 ; 
	for (int i = 0 ;i+1 < n ; i++)
		{
			if (S.substr(i,2) == "BA")
			{
				ba = 1; 
				ab = Find (i+2,"AB");
				break;  
			}
		}
	return (ab&&ba); 
}
int main ()
{
	
	cin >> S ; 
	
	ab = ba = 0 ;
	n = S.size();  
	cout << (Solve() ? "YES" : "NO"); 

return 0; 

}

