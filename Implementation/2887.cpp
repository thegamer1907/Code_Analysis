#include <bits/stdc++.h>
using namespace std;

#define read(num) scanf("%d", &num)
#define readll(num) scanf("%lld", &num)
#define read2(num1, num2) scanf("%d%d", &num1, &num2)
#define read3(num1, num2, num3) scanf("%d%d%d", &num1, &num2, &num3)
#define reads(str) scanf("%s", str)
#define readc(ch) scanf("%c", &ch)

#define M 1000000007
#define pb push_back
#define mp make_pair

#define pii pair<int, int>
#define vi vector<int>
#define ll long long

int main()
{
	set<char> s;
	char a, str[1009];

	cin.getline(str, 1009);
	for(int i=0; i<strlen(str); i++)
	{
		a = str[i];
		if(a>='a' && a<='z')
			s.insert(a);
	}

	printf("%d\n", (int)s.size());
}