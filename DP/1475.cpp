#include <bits/stdc++.h>
#define ii pair <int, int>
#define INF 0x3f3f3f3f
#define ff first
#define ss second
using namespace std;
#define MAXN 101
#define go(i,n) for (int i = 0; i < (int) n; i++)
int vetor[MAXN];
int n;



int main (){
	int n;
	scanf ("%d", &n);
	go (i,n){
		scanf ("%d", &vetor[i]);
	}
	int maior = -INF;
	int indice = -1;
	int qtd = 0;
	int distancia = 0;
	go (i,n){
		qtd = 0;
		if (vetor[i]){ qtd = -1;}
		else qtd = 1;
		if (qtd > maior){
			maior = qtd;
			indice = i;
			distancia = 1;
		}
		for (int j = i + 1; j < n; j++){
			if (vetor[j]) qtd -= 1;
			else qtd += 1;
			if (qtd > maior){
				maior = qtd;
				indice = i;
				distancia = j-i+1;
				//printf ("%d\n", qtd);
			}
		}
	}
	//bool flag = false;
	//if (maior <= 0) flag = true;
	int ans = 0;
	for (int i = indice; i < indice+distancia; i++) vetor[i] = !vetor[i];
	for (int i = 0; i < n; i++) ans += vetor[i];
	printf ("%d\n", ans);
	return 0;
}
