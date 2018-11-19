/*
 * Matheus Oliveira
 * 05/10/2017
 * A.cpp
*/

#include <bits/stdc++.h>
using namespace std;

int main () {

	string password, atual;
	int times, i, letras[2];
	bool possible = false;

	cin >> password;
	memset(letras, 0, sizeof(letras));

	scanf("%d", &times);

	for(i=0; i < times; i++) {

		cin >> atual;

		if(atual == password) possible = true;
		else {
			if(atual[0] == password[1]) letras[1] = 1;
			if(atual[1] == password[0]) letras[0] = 1;

			if(letras[0] == 1 and letras[1] == 1) possible = true;
		}
	}

	if(possible) printf("YES\n");
	else printf("NO\n");

	return 0;
}