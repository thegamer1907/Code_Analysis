#include <bits/stdc++.h>

using namespace std;

vector <string> todos;

void solve(string s, int indx, string aux){

	if(indx == s.size()){
		todos.push_back(aux);
		return;
	}

	if(s[indx] != '-'){
		aux += s[indx];
		solve(s,indx+1,aux);
	}
	else{
		solve(s,indx+1,aux + '0');
		solve(s,indx+1,aux + '1');
	}

}

int main() {
	
	int n,k;

	scanf("%d %d", &n, &k);

	vector <string> bin;

	vector <int> decim;

	for(int i = 0; i < n; i++){
		string aux = "";
		for(int j = 0; j < k; j++){
			int val;
			scanf("%d", &val);
			if(val == 1) aux += "1";
			else aux += "0";
		}
		bin.push_back(aux);

		int pot = 1;

		int resp = 0;

		for(int j = aux.size()-1; j >= 0; j--){
			if(aux[j] == '1') resp += pot;
			pot *= 2;
		}
		decim.push_back(resp);
	}

	sort(decim.begin(),decim.end());

	for(int i = 0; i < n; i++){
		string com = bin[i];
		
		string s1 = bin[i];

		for(int j = 0; j < s1.size(); j++){
			if(s1[j] == '1') s1[j] = '0';
			else s1[j] = '-';
		}

		todos.clear();

		string vazio = "";

		solve(s1,0,vazio);

		for(int l = 0; l < todos.size(); l++){

			string s = todos[l];

			int pot = 1;

			int resp = 0;

			for(int j = s.size()-1; j >= 0; j--){
				if(s[j] == '1') resp += pot;
				pot *= 2;
			}

			auto x = lower_bound(decim.begin(),decim.end(),resp);

			if(x != decim.end()){
				if(*x == resp){
					printf("YES\n");
					return 0;
				}
			}
		}
	}

	printf("NO\n");

	return 0;
}