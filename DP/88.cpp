#include <iostream>
using namespace std;

void merge(int a[], int x, int y, int z){
	int b[z - x];
	int i = x, j = y;
	for(int k = 0; k < z - x; k++){
		if(i >= y){
			b[k] = a[j];
			j++;
			continue;
		}
		if(j >= z){
			b[k] = a[i];
			i++;
			continue;
		}
		if(a[i] < a[j]){
			b[k] = a[i];
			i++;
			continue;
		}
		b[k] = a[j];
		j++;
	}
	for(int k = 0; k < z - x; k++){
		a[x + k] = b[k];
	}
}

void ms(int a[], int x, int y){
	if(y > x + 1){
		ms(a, x, (x + y) / 2);
		ms(a, (x + y) / 2, y);
		merge(a, x, (x + y) / 2, y);
	}
}
int main(){
	int n, m;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	cin>>m;
	int b[m];
	for(int i = 0; i < m; i++){
		cin>>b[i];
	}
	ms(a, 0, n);
	ms(b, 0, m);
	int j = 0, res = 0;
	for(int i = 0; i < n && j < m; i++){
		while(b[j] < a[i] - 1 && j < m - 1){
			j++;
		}
		if(b[j] < a[i] - 1){
			break;
		}
		if(a[i] < b[j] - 1){
			continue;
		}
		j++;
		res++;
	}
	cout<<res;
	return 0;
}
