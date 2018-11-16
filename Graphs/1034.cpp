#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <stack>
#include <queue>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

bool DFS(vector<vector<pair<int,int> > > &grane, int pocetniCvor, int k){
	
	stack<int> stek;
	stek.push(pocetniCvor);
	vector<bool> posjeceniCvorovi(grane.size(), false);
	posjeceniCvorovi[pocetniCvor] = true;
	while(!stek.empty()){
		int trenutniCvor = stek.top();
		if(trenutniCvor == k)
			return true;
		bool ubacenCvor = false;
		for(int i = 0; i < grane[trenutniCvor].size(); i++){
			int potencijalniCvor = grane[trenutniCvor][i].first;
			if(posjeceniCvorovi[potencijalniCvor] == false){
				stek.push(potencijalniCvor);
				posjeceniCvorovi[potencijalniCvor] = true;
				ubacenCvor = true;
				break;
			}
			
		}
		if(ubacenCvor == false){
			stek.pop();
		}
	}
	return false;
}
int main(int argc, char** argv) {
	int m, k, a;
	cin >> m >> k;
	vector<vector<pair<int,int> > > grane(m);
	for(int i = 0; i < m - 1; i++){
		cin >> a;	
		grane[i].push_back(make_pair<int,int>(i + a, 1));
		// Ukoliko zelimo dvosmjerne grane, odkomentaristi ovu liniju grane[b].push_back(make_pair<int,int>(a,t)));
	}
	if(DFS(grane, 0, k - 1) == true){
		cout << "YES";
	} else {
		cout << "NO";
	}
	
	return 0;
}
