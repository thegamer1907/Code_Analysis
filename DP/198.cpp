#include<bits/stdc++.h>

using namespace std ;

#define IOS ios::sync_with_stdio(0), ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long int 
#define ull unsigned long long
#define fr first
#define se second


#define FI(i,l,n) for(int i = l ; i < n ;i++)
#define FL(i,l,n) for(int i = l ; i < n ;i++)


int main(){
	IOS ;
	int n , l ;
	cin >> n ;
	int arb[n] ;
	FI(i,0,n) cin >> arb[i] ;
	cin >> l ;
	int arg[l] ;
	FI(i,0,l) cin >> arg[i] ;
	sort(arg , arg+l) ;
	sort(arb , arb+n) ;
	int p1 = 0 , p2 = 0 ;
	int ans = 0 ;
	while(p1 < n && p2 < l){
		if(abs(arb[p1] - arg[p2]) <= 1){
			p1++ ;
			p2++ ;
			ans++;
		}
		else {
			if(arb[p1] > arg[p2]) p2++ ;
			else p1++ ;
		}
	}
	cout << ans ;
	return 0 ;
}


