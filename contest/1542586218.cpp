#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
using namespace std;

string target;
string yeah[104];
string cmp;
string cmp2;
int main() {
	cin >> target;
	int n, i , j, flag=0;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		cin >> yeah[i];
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cmp = yeah[i] + yeah[j];
			for (int k = 0; k < cmp.size()-target.size()+1; k++) {
				cmp2 = cmp.substr(k, target.size());
				if (cmp2 == target)flag = 1;
			}
		
		}
	}

	if (flag == 0)puts("NO");
	else puts("YES");

}