#include <bits/stdc++.h>

using namespace std;

int main(){	
	
	int n,m,count = 0;
    string s;
	cin >> n >> m ;
	map<string,int> occ;
	
	for(int i = 0 ; i < n ; i++){
		cin >> s;
		occ[s]++;
	}
	for(int i = 0 ; i < m ; i++){
		cin >> s;
		if(occ[s] != 0){
			count++;
		}
	}

	
	if(n > m){
		cout << "YES" << endl ;
	}
	else{
		if((count % 2) != 0 && n == m)
			cout << "YES" << endl ;
		else
			cout << "NO" << endl ;
	}


	return 0;
}
