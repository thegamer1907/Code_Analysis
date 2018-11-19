#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
#define icin(x) scanf("%d", &x)
#define lcin(x) scanf("%lld", &x)
typedef long long ll;

int main(){
	string pwd, str;
	cin >> pwd;
	int n;
	icin(n);
	int f1=0, f2 =0;
	for(int i=0;i<n;i++){
		cin >> str;
		if(str[1] == pwd[1] && str[0] == pwd[0]){
			f1 = f2 = 1;
			continue;
		}
		if(str[1] == pwd[0]){
			f1 = 1;
		}
		if(str[0] == pwd[1]){
			f2 = 1;
		}
	}
	if(f1 == 1 && f2 == 1)
		printf("YES\n");
	else
		printf("NO\n");
}