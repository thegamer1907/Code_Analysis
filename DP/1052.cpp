#include <bits/stdc++.h>
using namespace std;

int main(){
	
	long long n,ligados = 0;
	
	cin >> n;
	
	long long vet[n];
	long long sum[n];
	
	for(long long i=0;i<n;i++){
		
		cin >> vet[i];
		
		if(vet[i]==1){
			
			sum[i] = -1;
			ligados++;
			
		}else{
			
			sum[i] = 1;
			
		}
		
	}
	
	long long maximo = 0,soma = 0,ini = 0,fim = 0,s = 0;
	
	for(long long i=0;i<n;i++){
		
		soma += sum[i];
		
		if(soma > maximo){
			
			maximo = soma;
			ini = s;
			fim = i;
			
		}
		
		if(soma < 0){
			
			soma = 0;
			s = i+1;
			
		}
		
	}
	
	if(maximo == 0){
		
		cout << n-1 << endl;
		
	}else{
		
		for(long long i=ini;i<=fim;i++){
			
			vet[i] = 1 - vet[i];
			
		}
		
		long long saida = 0;
		
		for(long long i=0;i<n;i++){
			
			saida += vet[i];
			
		}
		
		cout << saida << endl;
		
	}
	
	return 0;
}