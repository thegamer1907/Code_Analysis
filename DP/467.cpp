#include <bits/stdc++.h>
using namespace std;
// #define MAX 100
// int db[MAX] = {0};
// int dg[MAX]= {0};

int main(){
	int n, m,temp;
	cin >> n;
	int bd[n];
	for(int i = 0; i< n;i++){
		cin >> temp;
		bd[i] = temp;
	}
	cin >> m;
	int gd[m];
	for(int i =0; i< m;i++){
		cin >> temp;
		gd[i] = temp;
	}
	sort(bd,bd+n);
	sort(gd,gd+m);
	int res = 0,k=0;
	for(int i = 0; i < n;i++){
		while(true){
			// cout << bd[i] << gd[k] << endl;
			if(gd[k]>bd[i]+1){
				break;
			}
			else if(abs(gd[k]-bd[i]) <= 1){
				res+=1;
				k+=1;
				break;
			}
			else{
				k+=1;
			}
		}
		if(k == m){
			break;
		}
	}
	cout << res;
}