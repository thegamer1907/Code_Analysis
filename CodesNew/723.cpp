#include<bits/stdc++.h>
using namespace std;

vector< string >vec1,vec2,vec3 ;
map< string , int >map1 ;

int main(){
	int n , m ;
	cin>>n>>m ;
	for( int i  = 0 ; i < n ; i++ ){
		string str;
		cin>>str;
		vec1.push_back(str) ;
		map1[str] = 1 ;
	}
	for( int i = 0 ; i < m ; i++ ){
		string str ;
		cin>>str;
		if( map1.find(str) != map1.end() ){
			vec3.push_back(str) ;
			continue ;
		}
		vec2.push_back(str); 
	}
	int unmatch1 = n - vec3.size() ;
	int unmatch2 = vec2.size() ;
	int f = 0 ;
	if( vec3.size()%2 == 1 ){
		f = 1 ;
	}
	else if( vec3.size()%2 == 0 && vec3.size() != 0 ){
		f = 2 ;
	}
	
	//cout<<vec3.size()<<" "<<unmatch1<<" "<<unmatch2<<"\n" ;
	
	int chance = 0 ;
	int i = 0 , j = 0 ;
	if( f == 1 ){
		chance = 2; 
	}
	else if( f == 2 ){
		chance = 1 ;
	}
	else{
		chance = 1 ;
	}
	//cout<<chance<<"\n" ;
	while ( i < unmatch1 && j < unmatch2 ){
		if( chance == 1 ){
			i++ ;
			chance = 2 ;
			j++ ;
			chance = 1 ;
		}
		else if( chance == 2 ){
			j++ ;
			chance = 1 ;
			i++ ;
			chance = 2 ;
		}
	}
	
	if( chance == 1 ){
		if( i == unmatch1 ){
			cout<<"NO\n" ;
		}
		else if( j == unmatch2 ){
			cout<<"YES\n" ;
		}
	}
	else{
		if( j == unmatch2 ){
			cout<<"YES\n" ;
		}
		else if( i == unmatch1 ){
			cout<<"NO\n" ;
		}
	}
	
}