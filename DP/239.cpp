#include <bits/stdc++.h>

using namespace std;


int main(){

	int tam1,tam2,aux, par=0;
	cin>>tam1;

	int girl[102];
	int boy[102];

	memset(girl,0, sizeof(girl)); 	
	memset(boy,0,sizeof(boy));

	for(int i=0;i<tam1;i++){
		cin>>aux;
		girl[aux]++;
	}

	
	cin>>tam2;

	for(int i=0;i<tam2;i++){
		cin>>aux;
		boy[aux]++;
	}

	
	for(int i=1;i<=100;i++){
		for(int j=-1;j<=1;j++){	
			aux=min(boy[i],girl[i+j]);
			par+=aux;
			boy[i]-=aux;
			girl[i+j]-=aux;
		}
	}

	cout<<par<<endl;

	return 0;
}
