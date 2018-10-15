#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#define N 500010
using namespace std;
int n, l[N];
string s[N];

int MIN(int x, int y){return x < y ? x : y;}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> s[i], l[i] = s[i].size() - 1;
	for (int i = n; i >= 2; i--){
		int k = i - 1;
		bool b = 1;
		for (int j = 1; j <= MIN(l[i], l[k]); j++)
			if (s[i][j] != s[k][j]){
				if (s[i][j] < s[k][j])
					l[k] = j - 1;
				b = 0;
				break;
			}
		if (b && l[k] > l[i])
			l[k] = l[i];
		if (l[k] == 0){
			for (int p = 1; p < k; p++)
				l[p] = 0;
			break;
		}
	}
	for (int i = 1; i <= n; i++){
		for (int j = 0; j <= l[i]; j++)
			printf("%c", s[i][j]);
		printf("\n");
	}
	return 0;
}