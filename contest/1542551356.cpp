#include <iostream>
using namespace std;

const int MAXN = 100;
const int MAXM = 100;

struct CADENA{
	string prefijo;
	string sufijo;
	bool la_tengo[10][(1 << 10)];

	void init(string s){
		int n = s.size();
		if(n >= 10){
			prefijo = s.substr(0, 10);
			sufijo = s.substr(n - 10);
		}else{
			prefijo = s;
			sufijo = s;
		}
		for(int k = 1; k < 10; k++){
			for(int i = 0; i < (1 << k); i++) la_tengo[k][i] = false;

			if(k > n) continue;
			int num = 0;
			int f = 0;
			for(f = 0; f < k; f++){
				num <<= 1;
				num |= (s[f] == '1');
			}
			la_tengo[k][num] = true;
			int mask_bit_apagar = (1 << (k - 1)) - 1;
			while(f < n){
				num &= mask_bit_apagar;
				num <<= 1;
				num |= (s[f] == '1');
				la_tengo[k][num] = true;
				f++;
			}
		}
	}

	int obtenRespuesta(){
		int k;
		for(k = 9; k > 0; k--){
			bool pasa = true;
			for(int i = 0; pasa && i < (1 << k); i++){
				if(!la_tengo[k][i]){
					pasa = false;
				}
			}
			if(pasa) break;
		}
		return k;
	}

	CADENA operator + (const CADENA& otro) const{
		CADENA ret;
		string nueva = sufijo + otro.prefijo;
		ret.init(nueva);
		//modificar el prefijo y sufijo de ret
		ret.prefijo = prefijo;
		if(ret.prefijo.size() < 10){
			int n = nueva.size();
			if(n < 10){
				ret.prefijo = nueva;
			}else{
				ret.prefijo = nueva.substr(0, 10);
			}
		}
		ret.sufijo = otro.sufijo;
		if(ret.sufijo.size() < 10){
			int n = nueva.size();
			if(n < 10){
				ret.sufijo = nueva;
			}else{
				ret.sufijo = nueva.substr(n - 10);
			}
		}
		//agregar los que tenenemos de yo y de otro
		for(int k = 1; k < 10; k++){
			for(int i = 0; i < (1 << k); i++){
				ret.la_tengo[k][i] |= la_tengo[k][i] || otro.la_tengo[k][i];
			}
		}
		return ret;
	}
};

CADENA cadena[MAXN + MAXM + 2];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for(int i = 1; i <= n; i++){
		string s;
		cin >> s;
		cadena[i].init(s);
	}

	int m;
	cin >> m;
	for(int i = 1; i <= m; i++){
		int a, b;
		cin >> a >> b; //(s_a)(s_b)
		cadena[n + i] = cadena[a] + cadena[b];
		cout << cadena[n + i].obtenRespuesta() << "\n";
	}

	return 0;
}
