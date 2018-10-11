#include <iostream> 
#include <cstdlib> 
#include <string> 
#include <set> 
#include <map> 
#include <vector> 
#include <algorithm> 
using namespace std; 

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); cout.tie(NULL); 
	int n,m;  
	cin >> n >> m; 
	map<string,int> mpP,mpE;  
	set<string> chk; 
	for (int i = 0; i < n; i++){
		string s; 
		cin >> s; 
		chk.insert(s); 
		mpP[s]++;  
	}
	vector<string> common;  
	for (int i = 0; i < m; i++){
		string s; 
		cin >> s; 
		if (chk.count(s)){
			common.push_back(s);  
		}
		mpE[s]++; 
	}
	if (n > m) cout << "YES" << endl; 
	else if (n < m) cout << "NO" << endl; 
	else{
		int turn = 0; // 0: polandball,1: enemyball
		for (int i = 0; i < common.size(); i++){
			mpP.erase(common[i]); 
			mpE.erase(common[i]);  
			turn = (turn == 0 ? 1 : 0);  
		}
		n -= common.size(); m -= common.size();  
		if (n == m){
			if (turn == 0){
				cout << "NO" << endl; 
			}else cout << "YES" << endl; 
		}else if (n < m){
			cout << "NO" << endl; 
		}else{
			cout << "YES" << endl; 
		}
	}
	return 0; 
}