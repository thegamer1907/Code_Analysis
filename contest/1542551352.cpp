#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string pass;
	cin >> pass;

	int n;
	cin >> n;

	bool aparece_ini = false, aparece_fin = false;
	for(int i = 1; i <= n; i++){
		string cad;
		cin >> cad;
		if(pass == cad){
			aparece_ini = true;
			aparece_fin = true;
		}else{
			if(pass[0] == cad[1]){
				aparece_ini = true;
			}
			if(pass[1] == cad[0]){
				aparece_fin = true;
			}
		}
	}

	if(aparece_ini && aparece_fin){
		cout << "YES\n";
	}else cout << "NO\n";

	return 0;
}
