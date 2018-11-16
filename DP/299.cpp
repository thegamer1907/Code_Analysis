#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std ;

ll abs(ll a, ll b){
	if((a-b) == 1 || (a-b) == 0 || (a-b) == -1) return 0 ;
	else if((a-b) < -1) return -1 ;
	else return 1 ;
}

int main(){
	ll var ;

	ll b;
	cin >> b ;
	
	vector<ll> boys;
	for(ll i = 0 ; i < b ; i++){
		cin >> var ;
		boys.push_back(var) ;
	}
	sort(boys.begin(), boys.end()) ;


	ll g ;
	cin >> g ;

	vector<ll> girls;
	for(ll i = 0 ; i < g ; i++){
		cin >> var ;
		girls.push_back(var) ;
	}
	sort(girls.begin(), girls.end()) ;

	ll p=0,q=0,temp=0,ans=0 ;
	while(p<b && q<g){
		temp = abs(boys[p],girls[q]) ;
		if(!temp){
			p++ ;
			q++ ;
			ans++ ;
		}
		else if(temp == -1){
			p++ ;
		}
		else q++ ;
	}

	cout << ans << endl ;

	return 0 ;
}