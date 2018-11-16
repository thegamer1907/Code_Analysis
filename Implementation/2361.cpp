#include <bits/stdc++.h>

using namespace std;

#define sc(a) scanf("%d",&a)
#define sc2(a,b) scanf("%d%d",&a,&b)
#define sc3(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define pri(x) printf("%d\n",x)
#define prie(x) printf("%d ",x)
#define prif() printf("\n")
#define sz(x) (int)((x).size())
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define BUFF ios::sync_with_stdio(false)

typedef long long int ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
	char s[20];
	scanf(" %s", s);
	int a = 0;
	for (int i = 0; s[i] != '\0'; i++)
		if (s[i] == '4' or s[i] == '7') a++;
	if (a == 4 or a == 7) printf("YES\n");
	else printf("NO\n");
	return 0;
}
