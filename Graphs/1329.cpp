#include <iostream>

using namespace std;

int main(){
	int n, obj;
	cin >> n >> obj;
	int transp[obj];
	for(int i = 0; i < obj; i++){
		int aux;
		cin >> aux;
		transp[i] = aux;
	}
	int i = 0;
	while(i != obj-1 && i < obj-1){
		i += transp[i];
	}
	if(i == obj-1){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}