#include <stdio.h>
#include <iostream>
#include <string>
#define MAX 105

using namespace std;

string str[MAX];

int main() {
  string pwd;
  cin >> pwd;
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    cin >> str[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if ((str[i] + str[j]).find(pwd) != string::npos) {
	printf("YES\n");
	return 0;
      }
    }
  }
  printf("NO\n");
  return 0;
}
