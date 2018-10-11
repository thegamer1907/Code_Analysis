#include <bits/stdc++.h>

using namespace std;

int main(){
	int N, M, iguais = 0, A = 0, B = 0;
	scanf("%d%d",&N,&M);
	string palavra;
	map <string, int> mapa;
	for(int i = 0; i < N; i++){
		cin >> palavra;
		mapa[palavra]++;
		if(mapa[palavra] == 2)iguais++;
	}
	for(int i = 0; i < M; i++){
		cin >> palavra;
		mapa[palavra]++;
		if(mapa[palavra] == 2)iguais++;
	}
	A = N - iguais + (iguais / 2) + (iguais%2);
	B = M - iguais + (iguais / 2);
	if(A > B)printf("YES\n");
	else printf("NO\n");
	return 0;
}