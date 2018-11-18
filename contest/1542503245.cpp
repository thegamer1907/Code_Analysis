#include <bits/stdc++.h>
#define ll long long 
#define pb push_back 
#define fi first
#define se second 
#define pr pair
using namespace std;
const long long N = 10000;
ll n ; 
string a;
string a2[N];
int main()
{
	
	ios_base::sync_with_stdio(false);
	
	cin >> a;
	cin >> n;	
	bool t = false ;
	bool t2 = false ;
	bool t3 = false ; 
	for(int i = 0 ; i < n ; i ++)
	{
		cin >> a2[i] ;
		if(a2[i][0] == a[0] && a2[i][1] == a[1] || a2[i][0] == a[1] && a2[i][1] == a[0] ){t = true;}
		if(a2[i][1] == a[0] ){t2 = true;}
		if(a2[i][0] == a[1] ){t3 = true;}
	}
	if(t2 == true && t3 == true){t = true;}
	if(t == true){cout<<"YES";}
	else{cout<<"NO";}
	
	
	
	
	return 0 ; 
}