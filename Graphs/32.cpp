#include <iostream>
using namespace std;

int main(){
	int n,t,i;
	cin >> n >> t;
	char a[n+1]={};
	for (int i=1;i<=n;i++){
		cin >> a[i];
	}
	for (int j=1;j<=t;j++){
		for (i=1;i<n;i++){
			if ((a[i]=='B')&&(a[i+1]=='G')){
				a[i]='G';
				a[i+1]='B';
				i++;
			}
		}
	}
	for (int i=1;i<=n;i++){
		cout << a[i];
	}
	return 0;
}