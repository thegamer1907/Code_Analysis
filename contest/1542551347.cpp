#include <iostream>
using namespace std;

const int TAM = 3600 * 12;

const int TAPADO = 1;
const int META = 2;

int marcado[TAM + 2];

int contador = 10;

bool llego(int ini, int fin){
	int i = ini;
	while(marcado[i] != TAPADO){
		if(i == fin) return true;
		i = (i + 1) % TAM;
	}
	i = ini;
	while(marcado[i] != TAPADO){
		if(i == fin) return true;
		i = (i + (TAM - 1)) % TAM;
	}
	return false;
}

int valor(int h, int m, int s){
	int ret = 3600 * h;
	ret += 60 * m;
	ret += s;
	return ret;
}

int valor(int m, int s){
	int ret = 720 * m;
	ret += 12 * s;
	return ret;
}

int valor(int s){
	int ret = 720 * s;
	return ret;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int h, m, s, t1, t2;
	cin >> h >> m >> s;
	cin >> t1 >> t2;

	h %= 12;
	t1 %= 12;
	t2 %= 12;

	marcado[valor(h, m, s)] = TAPADO;
	marcado[valor(m, s)] = TAPADO;
	marcado[valor(s)] = TAPADO;

	int meta = valor(t2, 0, 0);
	int inicio = valor(t1, 0, 0);
	if(llego(inicio, meta)){
		cout << "Yes\n";
	}else cout << "No\n";

	return 0;
}
