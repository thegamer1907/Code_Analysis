#include <cstdio>
#include <algorithm>

using namespace std;

typedef long long int64;

const int Max_N(1000005);

char s[Max_N];
int len, fail[Max_N], maxfail, Ans;

int main(int argc, char** argv)
{
	scanf("%s", s + 1);
	
	int k(fail[0] = fail[1] = 0);
	for (len = 2; s[len]; ++len)
	{
		maxfail = max(maxfail, fail[len - 1]);
		while (k && s[k + 1] != s[len])
			k = fail[k];
		fail[len] = k += s[k + 1] == s[len];
	}
	
	if (--len, Ans = (maxfail >= fail[len] ? fail[len] : fail[fail[len]]))
		s[Ans + 1] = '\0', puts(s + 1);
	else
		puts("Just a legend");
	
	return 0;
}