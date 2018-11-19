#include<iostream>

using namespace std;
int main(){
	string clave;
	int n, cont=0, cont1=0;
	getline(cin,clave);
	cin>>n;
	string prueba[n], letras[n];
	for(int i=0; i<n;i++){
		cin>>prueba[i];
		if(prueba[i]==clave) cont1++;
	}
	if(cont1==0){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				/*if(prueba[i][0]==clave[0] && prueba[j][1]==clave[1]){
					cout<<"Yes";
					cont++;	
				}*/
				if(prueba[i][0]==clave[1] && prueba[j][1]==clave[0]){
					cout<<"YES";
					cont++;	
					break;
				}
			}
			if(cont!=0) break;
		}
	if(cont==0) cout<<"NO";	
	}
	else cout<<"YES";

	return 0;
}
