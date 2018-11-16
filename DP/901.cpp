
#include <bits/stdc++.h>

using namespace std;

int arvore1[500], arvore0[500], N;

int soma1(int x){
	
	int s = 0;
	
	while(x > 0){ 
		s += arvore1[x]; 
		x -= (x & -x); 
	}
	
	return s;
}

void atualiza1(int x, int v){ 
	
	while(x <= N){
		arvore1[x] += v;
		x += (x & -x); 
	}
}

int soma0(int x){
	
	int s = 0;
	
	while(x > 0){ 
		s += arvore0[x]; 
		x -= (x & -x); 
	}
	
	return s;
}

void atualiza0(int x, int v){ 
	
	while(x <= N){
		arvore0[x] += v;
		x += (x & -x); 
	}
}

int main(){
	int n;
	
	scanf("%d", &n);
	
	N = n;
	
	for(int i=0;i<n;i++){
		int aux;
		
		scanf("%d", &aux);
		
		if(aux)
			atualiza1(i+1, 1);
		else
			atualiza0(i+1, 1);
	}
	
	int maior = 0, qtd = soma1(n);
	
	//cout << soma1(1)-soma1(0) << endl;// + (soma0(1)-soma0(1));
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int aux = qtd - (soma1(j+1)-soma1(i)) + (soma0(j+1)-soma0(i));
			
			if(aux>maior)  maior = aux;
		}
	}
	
	printf("%d", maior);

	return 0;
}
