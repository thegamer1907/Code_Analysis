#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define f(i, x, n) for(int i = x; i < (int)n; ++i)

char s[3];
string in;

int main(){
	int n;
	scanf("%s%d", s, &n);
	bool fi = false, sc = false, fl = false;
	f(i, 0, n){
		cin >> in;
		if (in == s)fl = true;
		if (in[0] == s[1])fi = true;
		if (in[1] == s[0])sc = true;
	}
	printf("%s\n", fl || fi && sc ? "YES" : "NO");
}