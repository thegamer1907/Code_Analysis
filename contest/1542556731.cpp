#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	char pass[3], words[3];
	bool suff = false, inf = false, tot = false; 

	scanf("%s", pass);
	
	scanf("%d", &n);

	while(n--)
	{
		scanf("%s", words);
		if (words[0] == pass[0] and words[1] == pass[1])
			tot = true;
		if (words[0] == pass[1])
			inf = true;
		if (words[1] == pass[0])
			suff = true;
	}

	if ((suff and inf) or tot)
		puts("YES");
	else
		puts("NO");
	return 0;
}
