#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;

	scanf("%d", &n);

	vector <string> v;

	for(int i = 0; i < n; i++){
		char s[500];
		scanf(" %s", s);
		v.push_back(s);
	}

	set <string> todos[250][8];

	for(int i = 0; i < n; i++){
		
		string atual = v[i];
		
		for(int j = 0; j < atual.size(); j++){
		
			string aux = "";
			aux += atual[j];
			todos[i][aux.size()].insert(aux);

			for(int k = j+1; k < atual.size(); k++){
				aux += atual[k];
				if(aux.size() > 7) break;
				todos[i][aux.size()].insert(aux);
			}
		}

		// for(int j = 0; j < 8; j++){
		// 		for(auto x: todos[i][j]){
		// 			cout << x << " ";
		// 		}
		// 		// cout << todos[n][i].size() << " ";
		// 	cout << endl;
		// }

	}

	int m;

	scanf("%d", &m);

	while(m--){

		int v1,v2;
		scanf("%d %d", &v1, &v2);

		v1--;
		v2--;

		string atual = "";
		atual += v[v1];
		atual += v[v2];

		//cout << atual << endl;

		for(int i = 1; i < 8; i++){
			for(auto x: todos[v1][i]) todos[n][i].insert(x);
			for(auto x: todos[v2][i]) todos[n][i].insert(x);
		}

		// if(atual == "11110100011110001110011000010000011100100011100101100010110001")
		// 	for(int i = 0; i < 8; i++)
		// 		for(auto x: todos[n][i]){
		// 			cout << x << " ";
		// 		}
		// 		// cout << todos[n][i].size() << " ";
		// 	cout << endl;

		int pos = v[v1].size();

		int tam = 0;

		for(int i = 0; i < 6; i++){
					
			pos--;

			if(pos < 0) break;

			string aux = "";
			aux += atual[pos];

			int j = pos+1;

			while(aux.size() < 7 and j < atual.size()){
				aux += atual[j++];
				todos[n][aux.size()].insert(aux);
			}
		}

		// if(atual == "01100010110001")
		// 	for(int i = 0; i < 8; i++){
		// 		cout << todos[n][i].size() << " ";
		// 	}
		// 	cout << endl;

		int resp = 0;

		for(int i = 0; i < 8; i++){
			if(todos[n][i].size() == (1 << i)){
				resp = i;
			}
		}

		printf("%d\n",resp);

		string aux = "";

		if(atual.size() > 50)
            atual = atual.substr(0, 15) + atual.substr(atual.size() - 15);

		v.push_back(atual);

		n++;
	}


	return 0;
}