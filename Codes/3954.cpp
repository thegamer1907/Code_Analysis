#include <iostream>
using namespace std;

int B, S, C;
int nB, nS, nC;
int pB, pS, pC;

long long int R;

bool me_alcanza(long long int t){
	long long int B_necesito = B;
	long long int S_necesito = S;
	long long int C_necesito = C;

	B_necesito *= t;
	S_necesito *= t;
	C_necesito *= t;

	B_necesito -= nB;
	S_necesito -= nS;
	C_necesito -= nC;

	long long int costo = 0, aux;
	if(B_necesito > 0){
		aux = pB;
		aux *= B_necesito;
		costo += aux;
	}

	if(S_necesito > 0){
		aux = pS;
		aux *= S_necesito;
		costo += aux;
	}

	if(C_necesito > 0){
		aux = pC;
		aux *= C_necesito;
		costo += aux;
	}

	return costo <= R;
}

long long int busqueda_bin(long long int ini, long long int fin){
	if(ini > fin){
		return ini - 1;
	}

	long long int medio = (ini + fin) / 2;
	if(me_alcanza(medio)){
		return busqueda_bin(medio + 1, fin);
	}
	
	return busqueda_bin(ini, medio - 1);
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string cad;
	cin >> cad;

	for(int i = 0; i < cad.size(); i++){
		if(cad[i] == 'B'){
			B++;
		}else if(cad[i] == 'S'){
			S++;
		}else{
			C++;
		}
	}

	cin >> nB >> nS >> nC;

	cin >> pB >> pS >> pC;

	cin >> R;

	long long int lim = 1;
	for(int i = 1; i <= 15; i++){
		lim *= 10;
	}
	cout << busqueda_bin(0, lim) << "\n";

	return 0;
}
