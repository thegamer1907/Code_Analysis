#include<bits/stdc++.h> 
using namespace std; 

typedef long long ll ; 
typedef unsigned long long ull; 


int main(int argc, char const *argv[])
 {
 
 	ll n , m, k;
 	cin >> n >> m >> k; 
 	ull p[m]; 
 	
 	for(int i = 0; i<m; cin >> p[i], ++i); 

 	ull cum = 0, new_cum = 0; 
 	int i = 0; 
 	ll ops = 0, cur_page ; 
 	while(i < m){
 		 
 		cur_page = (p[i] - cum - 1) / k; 
 		while(i < m && (p[i] - cum - 1) / k == cur_page){
 			++i; 
 			new_cum++; 
 		}
 		if(i == m) break; 
 		// cout << p[i] << endl; 
 		ops++;
 		cum += new_cum; 
 		new_cum = 0; 
 	}
 	cout << ops + 1; 



 }