#include <bits/stdc++.h>

using namespace std;

int main(){

	unsigned long long int n,a,soma=0,maior=0,cont=0;
	cin >> n;
	for(unsigned long long int i=0;i<n;i++){
		cin >> a;
		soma+=a;
		if(maior<a){
			maior=a;
		}
	}
	cont=soma/(n-1) + (soma%(n-1)?1:0);
	cont=max(maior,cont);
	cout << cont << endl;
	return 0;
}
