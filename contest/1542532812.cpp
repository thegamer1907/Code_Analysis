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
	int h, m, s, a, b;
	icin(h), icin(m), icin(s), icin(a), icin(b);
	if (a < b){
		int temp = b;
		b=a;
		a=temp; 
	}
	int min = m%5;
	int sec = s%5;
	m = m/5;
	s= s/5;
	char hr, mn, sc;
	if(h < a && h >= b)
		hr = 'm';
	else
		hr = 'o';
	if(m < b || m >= a)
		mn = 'o';
	else
		mn = 'm';
	if(s < b || s >= a)
		sc = 'o';
	else
		sc = 'm';
	if(hr == 'm' && mn == 'm' && sc == 'm')
		printf("YES\n");
	else if(hr == 'o' && mn == 'o' && sc == 'o')
		printf("YES\n");
	else
		printf("NO\n");
}