#include <bits/stdc++.h>

using namespace std;

vector<long long> w;
long long d;
int a;

void binarySearch(long long value){
	int b=w.size()-1;
	int k;
	while(a<=b){
		k=(a+b)/2;
		if(w[k]==(value+d)){
			a=k+1;
			break;
		}

		if(w[k]>(value+d)) b=k-1;
		else a=k+1;
	}
	d+=value;
	
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
	a=d=0;
	while(m--){
		cin >> v;
		binarySearch(v);
		if(a==w.size()){
			a=0;
			d=0;
		}
		cout << w.size()-a << endl;
	}
	
	return 0;
}
