#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

bool A[26],B[26];
char pw[10];
char tmp[10];

int main()
{
	scanf("%s",pw);
	int N;
	scanf("%d",&N);
	bool ok = false;
	while(N--)
	{
		scanf("%s",tmp);
		if (tmp[0] == pw[0] && tmp[1] == pw[1]) ok = true;
		B[tmp[1] - 'a'] = true;
		A[tmp[0] - 'a'] = true;
	}	
	if (B[pw[0]-'a'] && A[pw[1]-'a']) ok = true;
	puts(ok?"YES":"NO");
}
