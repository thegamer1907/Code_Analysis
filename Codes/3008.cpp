#include<bits/stdc++.h>
using namespace std ;
const int MAXN = 1e6+10 ;
#define int long long

string s ;
int base = 1352 , MOD = 123698745 , n  ; 
int pw[MAXN] , h[MAXN] ;

int get_hash(int l , int r )
{
	int res = h[r] ; 
	if(l-1 >= 0)
		res-=(h[l-1] * pw[r-l+1] ) %MOD ; 
	while(res<0)
		res+=MOD ;
	return res%MOD ;
}

bool check(int x , int len) 
{
	for(int i=1 ; i<n-len ; i++)
	{
		if(x == get_hash(i , i+len-1))
			return true ;
	}
	return false ;
}

int32_t main()
{
	cin >> s ;
	n = s.size() ; 
	pw[0] = 1 ; 
	for(int i=1 ; i<MAXN ; i++)	
		pw[i] = pw[i-1]*base %MOD ;
	h[0] = s[0] ;
	for(int i=1 ; i<n ; i++)
		h[i] = ( (h[i-1]*base%MOD )+s[i]) %MOD ;
	for(int i=n ; i>=1 ; i--)
	{
		if(get_hash(0 , i-1) == get_hash(n-i , n-1))
		{
//			cout <<i<<endl ; 
			if(check(get_hash(0 , i-1) , i))
				return cout << s.substr(0 , i) << endl , 0 ;
		}
	} 
	cout << "Just a legend" << endl;
}
