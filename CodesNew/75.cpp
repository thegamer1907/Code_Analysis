
#include <bits/stdc++.h>
using namespace std;

int abs(int n){
if(n>=0){
	return n;
} else{
	return -1*n;
}
}

// Función valor absoluto

int main(){
	int N; double I;
	cin >> N;
	cin >> I;
	double d=I;
	vector<int> lista(N+2); //Para poder comparar los extremos mas fácil
	lista[N+1]=I; // En el último se guarda el I


	// Toma de datos en los índices de 1 al N

	for(int i=1; i <(N+1); ++i){
		int aux;
		cin >> aux;
		lista[i]=aux;
	}


	sort(lista.begin(),lista.end());

	// Búsqueda binaria en el intervalo [0,I]

	double A=0.0; double B=I; double mid=0.0;

	while (abs(B-A)>pow(10,-9)){
		int acepta=1; //terminar reducir el intervalo
		mid =A+((B-A)/2.0);
		d=mid;
		if (N==1){
			if (abs(lista[1]-A) <= abs(B-lista[1])){
				d=B-lista[1];
				break;
			} else{
				d=lista[1]-A;
				break;
			}
		} else{

			for(int i=1;i<N; ++i){
				if ((lista[i+1]-lista[i])>2*mid || lista[1]>mid || lista[N] < (I-mid) ){
					acepta=0;
					break;
				}
			}


		}


		if(acepta==0){
			A=mid;
		}
		else{
			B=mid;

		}
		}
		cout << fixed << setprecision(10);
		cout << d << endl;
	return 0;


}

// 1538759098267
