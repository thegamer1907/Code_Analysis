#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<vector>
#include<string>
#include<iostream>
using namespace std;
string  vec[500002];
int length[500002];
int main() {

//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		string temp;
		cin >> temp;
		vec[i] = temp;
	}


	memset(length, -1, sizeof(length));

	length[n] = vec[n].size() - 1;
	for (int i = n-1; i >= 1; i--) {

		for (int j = 1; j < vec[i].size(); j++) {

			if (length[i + 1] == 0) {
				length[i] = 0;
				
				break;
			}
		
			if ((j > length[i + 1] && (length[i + 1] < ( vec[i + 1].size() - 1) )) || vec[i][j] > vec[i + 1][j]) {
				length[i] = j-1;
				break;
			}
			if (vec[i][j] < vec[i + 1][j]) {

				length[i] = vec[i].size() - 1;
				break;
			}
			
		}
		if (length[i] == -1)
			length[i] = vec[i].size() - 1;
	}


	for (int i = 1; i <= n; i++) {
		printf("#");
		for (int j = 1; j <= length[i]; j++) {
			printf("%c", vec[i][j]);
		}
		printf("\n");
	}
	return 0;
}