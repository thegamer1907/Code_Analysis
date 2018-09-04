#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000000;

const string IMPOSIBLE = "Just a legend";

int preff[MAXN + 2];

char S[MAXN + 2];
int N;

void calcula_pref(){
	preff[1] = 0;
	int k;
	for(int i = 2; i <= N; i++){
		k = preff[i - 1];
		while(S[k + 1] != S[i] && k > 0){
			k = preff[k];
		}
		if(S[k + 1] == S[i]){
			preff[i] = k + 1;
		}
	}
}

bool existe(int k){
	if(k == 0) return false;
	//KMP
	int p = 1;
	for(int i = 2; i < N; i++){
		while(S[i] != S[p] && p > 1){
			p = preff[p - 1] + 1;
		}
		if(S[i] == S[p]) p++;

		if(p > k) return true;
	}

	return false;
}

void imprime(int k){
	if(k == 0){
		cout << IMPOSIBLE << "\n";
	}else{
		for(int i = 1; i <= k; i++){
			cout << S[i];
		} cout << "\n";
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> (S + 1);
	N = strlen(S + 1);

	calcula_pref();

	int tam = preff[N];
	if(existe(tam)){
		imprime(tam);
	}else{
		tam = preff[tam];
		imprime(tam);
	}
	return 0;
}
