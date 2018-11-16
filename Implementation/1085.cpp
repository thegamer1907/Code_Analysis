#include<bits/stdc++.h>

using namespace std ;

#define IOS ios::sync_with_stdio(0), ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long int 
#define ull unsigned long long

#define FI(i,l,n) for(int i = l ; i < n ;i++)
#define FL(i,l,n) for(int i = l ; i < n ;i++)


int main(){
	IOS ;
	string s;
	int x , y ;
	cin >> x >> y ;
	cin >> s ;
	while(y--){
		string s1 = s ;
		for(int i = 0 ; i < s.length() -1 ;++i)
				if(s[i] == 'B' && s[i+1] == 'G')
					swap(s1[i],s1[i+1]) ;
		s = s1 ;		
	}
	cout << s ;
	return 0 ;
}