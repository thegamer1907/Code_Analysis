#include <bits/stdc++.h>

using namespace std;

#define maxn 100

int n, better;
int li[maxn];

int main(){
	int q = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &li[i]);
		if(!li[i]) q++;
	}
	
	if(q){
		int qOnes;
		int qZeros;
		for(int k=0; k<n; k++){
			if(!li[k]){
				qZeros = 0; qOnes = 0;
				for(int i=k; i<n; i++){
					if(!li[i]){
						qZeros ++;
					}
					if(qZeros && li[i]){
						qOnes ++;
					}

					better = max(better, (n-q)-qOnes+qZeros);
				}
			}
		}
	}else{
		better = n-1;
	}

	printf("%d\n", better);

	return 0;
}