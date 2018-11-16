#include <bits/stdc++.h>

using namespace std;

int contador = 0;
void dfs(vector< list<int> > &lista_adj, vector<int> &entrada, int vertice);

int main() {

	int num_celulas, destino, num;

	cin >> num_celulas >> destino;
	vector< list<int> > lista_adj(num_celulas, list<int>());
	vector<int> entrada(num_celulas);

	for(int i = 0; i < num_celulas-1; i++) {
		cin >> num;
		lista_adj[i].push_back(i+1+num);
	}

	for(int i = 0; i < num_celulas; i++) {
		entrada[i] = 0;
	}	

	dfs(lista_adj, entrada, 0);

	if(entrada[destino-1] != 0) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}

void dfs(vector< list<int> > &lista_adj, vector<int> &entrada, int vertice) {
	contador++;
	entrada[vertice] = contador;
	list<int>::iterator it;

	for(it = lista_adj[vertice].begin(); it != lista_adj[vertice].end(); it++) {
		if(entrada[*it -1] == 0) {
			dfs(lista_adj, entrada, *it -1);
		}
	}
}