#include <iostream>
#include <vector>
using namespace std;

bool cubeta[16 + 2];

bool valido(int mask){
	int n = 0;
	vector<int> cads;
	for(int i = 0, bit = 1; i < 16; i++, bit <<= 1){
		if((mask & bit) != 0){
			n++;
			//estoy usando la i-esima cadena
			if(!cubeta[i]) return false;
			cads.push_back(i);
		}
	}
	int lim = n / 2;
	for(int bit = 1; bit < (1 << 4); bit <<= 1){
		int cnt = 0;
		for(int i = 0; i < n; i++){
			if((cads[i] & bit) != 0) cnt++;
		}
		if(cnt > lim) return false;
	}
	return true;
}

bool se_puede(){
	for(int mask = 1; mask < (1 << 16); mask++){
		if(valido(mask)){
			return true;
		}
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;

	for(int i = 1; i <= n; i++){
		int num = 0;
		for(int j = 1, bit = (1 << 3); j <= k; j++, bit >>= 1){
			char c;
			cin >> c;
			if(c == '1'){
				num |= bit;
			}
		}
		cubeta[num] = true;
	}

	string resp[] = {"No", "Yes"};
	cout << resp[se_puede()] << "\n";

	return 0;
}
