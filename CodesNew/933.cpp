#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<string> polball;
vector <string> enemy;


int main(){
	int n , m  ;
		string t;
		cin >> n >>m;
	
		for(int i =0 ; i < n ; i++) {
			cin >>t;
			polball.push_back (t) ;
		}
	
		for(int i =0 ; i <m ; i++){
			cin >>t;
			enemy.push_back(t);
		}
		sort (polball.begin() , polball.end());
		sort (enemy.begin () , enemy.end());
	
		int i = 0  , j = 0  , counter = 0;
	
	
		while (i < n and j <m){
			if(polball[i]==enemy[j]){i++;j++;counter++;}
			else if(polball[i]<enemy[j]){i++;}
			else j++;
		
		}
	
		if(counter==0){
			if(n == m) cout <<"NO"<<endl;
			else if ( n < m) cout <<"NO"<<endl;
			else cout <<"YES"<<endl;
		
		}
	
		else if(counter %2 == 0){
			if( n ==m) cout <<"NO"<<endl;
			else if (n < m) cout <<"NO"<<endl;
			else cout <<"YES"<<endl;
		}
	
		else {
			if( n >= m) cout <<"YES"<<endl;
			else cout <<"NO"<<endl;
		}






	
return 0;}