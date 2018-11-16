#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(lli i  = (lli)(a); i < (lli)(b); i++)
#define pb push_back
#define mp make_pair
#define fst first
#define snd second
#define INF 1LL<<62
#define sz(x) (x).size()
#define trace(x) cerr << #x << ": " << x << endl;

typedef long long int lli;
typedef vector<lli>  vi;

vi arr;

template<typename T>
ostream &operator <<(ostream& out, vector<T> arr){
	lli n =  sz(arr);

	rep(i, 0, n){
		if(i)out << " ";
		out <<i <<": " << arr[i] ;
	}
	out << endl;
	return out;

}

int main(){
	lli n, n2;
	lli suma = 0;
	lli min =  0;
	lli minAnt = 0;
	lli max = 0;
	lli maxDif = 0;
	lli indice = 0;
	lli inicio = -1, fin = 0;
	lli trueInicio;
	lli sumaAnt = 0;
	lli cont=0;
	bool primerUno = true;
	lli contIni = 0;
	lli contFin = 0;
	lli cantUnos = 0;
	bool allnegative = true;
	cin >> n2;
	/*if(n2 == 1){
		cin >> n;
		cout << 1-n << endl;
		return 0;
	}*/

	rep(i, 0, n2)
	{
		cin >> n;
		arr.pb(n);
		suma += (-2*n+1);
	//	suma += n;
		if(suma - min > maxDif){
			maxDif = suma - min;
			//trace(suma);
			//trace(maxDif);
			allnegative = false;
			max = suma;
			//if(primerUno)trueInicio =  indice;
			//else 
			trueInicio = inicio;
			//trace(trueInicio);
			fin = indice;  
		}
		if(n == 0){	//Si el dato leido es 0
			if(primerUno && i > 0) contIni = cont;
			else if(primerUno && i == 0) contIni = 0;
			primerUno =  false;
			cont = 0;
		}
		else{				//Si el dato leido es 1
			cont++;
			cantUnos++;
			if(i == n2-1){
				if(primerUno) contIni =  cont;
				contFin = cont;
			} 
		}
		sumaAnt = suma;
		if(suma < min){
			min = suma;
			inicio = indice;
			//trace(inicio);
		}
		indice++;

	}

	lli rpta= cantUnos;
	rep(i, trueInicio+1, fin+1){
		rpta += (-2*arr[i] + 1);
	}
	cout << (allnegative ? contIni-1 : rpta) << endl;

	/*cout << "La suma maxima es: " << (allnegative ? min : maxDif) << endl;
	cout << "El tamaño de la subcadena es: " << (allnegative ? indice : fin - trueInicio) << endl;
	cout << "La subcadena es: {";
	if(allnegative){
		trueInicio = -1;
		fin = indice-1;
	}
	rep(i, trueInicio+1, fin+1){
		if(i > trueInicio +1) cout << ", ";
		cout << arr[i] ;
	} 
	cout << "}" << endl;
	//cout << arr;
*/

	return 0;
}