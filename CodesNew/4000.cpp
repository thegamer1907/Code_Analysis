#include <bits/stdc++.h>

using namespace std;

int a;
long long acum;

vector<long long> w;

void bs(long long value){
	int b=w.size()-1,k;
	while(a<=b){
		k=(a+b)/2;
		if((w[k])==(value+acum)){
			a=k+1;
			break;
		}
		if(w[k]<(value+acum))a=k+1;
		else b=k-1;
	}
	acum+=value;
}

int main(){
	int n,m;
	long long v,ant;
	cin >> n >> m;
	ant=0;
	while(n--){
		cin >> v;
		w.push_back(v+ant);
		ant+=v;
	}
	a=acum=0;
	while(m--){
		cin >> v;
		bs(v);
		if(a==w.size()){
			a=0;
			acum=0;
		}
		cout << w.size()-a << endl;
	}
	return 0;
}
