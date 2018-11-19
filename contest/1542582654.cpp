#include <bits/stdc++.h>
#define MAXN 100010
using namespace std;

int main(){
	string palavras[110];
	string pal, word;
	cin >> pal;
	int n; cin >> n;

	for (int i=0; i<n; i++){
		cin >> palavras[i];
	}

	for (int i=0; i<n; i++){
		if (palavras[i][0] == pal[0] && palavras[i][1] == pal[1]){
			printf("YES\n");
			return 0;
		}
		for (int j=0; j<n; j++){
			if (palavras[i][1] == pal[0] && palavras[j][0] == pal[1]){
				printf("YES\n");
				return 0;
			}

			if (palavras[j][1] == pal[0] && palavras[i][0] == pal[1]){
				printf("YES\n");
				return 0;
			}
		}
	}

	printf("NO\n");

	return 0;
}