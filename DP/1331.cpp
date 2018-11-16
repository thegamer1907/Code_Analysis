#include<bits/stdc++.h>
using namespace std;
int cont1[110], cont0[110];
vector<int> v;
int q1(int i, int j){
	return cont1[j]-cont1[i] + (v[i] == 1);
}
int q2(int i, int j){
	return cont0[j]-cont0[i] + (v[i] == 0);
}
int main(){
	int n, tot1 = 0;
	scanf("%d", &n);	
	for(int i = 0; i < n; i++){
		int val;
		scanf("%d", &val);
		if(val == 1)tot1++;
		v.push_back(val);
	}	
	if(v[0] == 1)cont1[0] = 1;
	if(v[0] == 0)cont0[0] = 1;
	for(int i = 1; i < n; i++){
		cont1[i] = cont1[i-1] + (v[i] == 1);
		cont0[i] = cont0[i-1] + (v[i] == 0);
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){			
			int valor = q2(i, j)  + (tot1 - q1(i, j));			
			valor = max(valor, 0);
			ans = max(ans, valor);
		}
	}
	printf("%d\n", ans);
}