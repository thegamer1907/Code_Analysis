#include <bits/stdc++.h>
using namespace std;

int h , m , s , t1 , t2, arr[50000];
int main() {
	cin >> h >> m >> s >> t1 >> t2;
	if(h==12)h=0;
	h*=3600;
	h+=60*s;
	h+=m;
	m*=60*12;
	m+=s;
	s*=60*12;
	t1*=3600;
	t2*=3600;
	for(int i = 0 ; i < 50000 ; i++ ){
		if(h==i||m==i||s==i)arr[i]=1;
		if(t1==i||t2==i)arr[i]=2;
	}
	int v = 0;
	for(int i = 0 ; i < 50000 ; i++){
		if(arr[i]==2)v++;
		if(arr[i]==1){
			if(v)break;
		}
		if(v==2){
			cout << "YES" << endl;
			return 0;
		}
	}
	v=0;
	for(int i = 0 ; i < 50000 ; i++){
		if(arr[i]==2){
			v++;
			break;
		}
		if(arr[i]==1){
			cout << "NO"<< endl;
			return 0;
		}
	}
	
	for(int i = 50000 ; i > 0 ; i--){
		if(arr[i]==2){
			v++;
			break;
		}
		if(arr[i]==1){
			cout << "NO" << endl;
			return 0;
		}
	}
	if(v==2){
		cout << "YES" << endl; return 0;
	}
	cout << "NO" << endl;
	return 0;
}