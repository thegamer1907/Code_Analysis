#include <bits/stdc++.h>
#define MAXN 1000010
using namespace std;



int back[MAXN], z[MAXN], tam, m[MAXN], s[MAXN];
string word;
void solve(){
	int i = 0, j = -1;
	back[0] = -1; 
	while (i < tam){
		while(j >= 0 && word[i] != word[j]) j = back[j];
		j++, i++;
		back[i] = j;	
	}

	int left = 0, right = 0, k1;

	for (int k=1; k<tam; k++){
		if (k > right){
			right = left = k;
			while (right < tam && word[right] == word[right-left]) right++;
			z[k] = right-left;
			right--;
		} else {
			k1 = k - left;
			if (z[k1] < right - k + 1){
				z[k] = z[k1];
			} else {
				left = k;
				while (right < tam && word[right] == word[right-left]) right++;
				z[k] = right-left;
				right--;			
			}
		}
	}

	// cout << word << endl;
	// for (int i=0; i<tam; i++){
	// 	printf("%d ", z[i]);
	// }
	// printf("\n");
	// for (int i=1; i<=tam; i++){
	// 	printf("%d ", back[i]);
	// }
	// printf("\n");


	for (int i=0; i<tam; i++){
		if (z[i] + i == tam){
			s[z[i]]++;
		} else {
			m[z[i]]++;
		}
	}

	for (int i=1; i<tam; i++){
		if (back[i]){
			m[back[i]]++;
		}
	}

	int res;
	bool flag = true;
	for (int i = tam; i >= 1; i--){
		if (m[i] != 0 && s[i] != 0){
			cout << word.substr(0, i) << endl;
			flag = false;
			break;
		}
	}
	if (flag){
		cout << "Just a legend" << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> word;
	tam = word.size();
	solve();

	return 0;
}