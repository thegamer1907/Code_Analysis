#include <cstdio>
using namespace std;

const int N = 1e6 + 10;
int n, used[N], next[N]; char str[N];

inline void red() {
	n = 0; char ch = getchar();
	for (;ch < 'a' || ch > 'z';) ch = getchar();
	for (;ch >= 'a' && ch <= 'z';) str[ ++ n] = ch, ch = getchar();
}

int main() {
	int j=0;red();
	for (int i = 2; i <= n; ++ i) {
		for(; j && str[j + 1] != str[i];) j = next[j];
		next[i] = (str[j + 1] == str[i]) ? ++ j : j;
	}
	for (int i = 1; i< n; ++ i) used[next[i]] = 1;
	for (int i = n; next[i] ; i = next[i])
		if(used[next[i]]) {
			for(int j = 1; j <= next[i]; ++ j) putchar(str[j]);
			return 0;
		}
	puts("Just a legend");
	return 0;
}
