/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include <bits/stdc++.h>

#define pb push_back
#define yes printf("YES")
#define no printf("NO")
#define scX scanf("%d", &x)
#define scY scanf("%d", &y)
#define scN scanf("%d", &n)
#define scS std::string s; std::cin >> s
#define scXY scanf("%d %d", &x, &y)
#define pr(x) printf("%d", x)
#define prS(s) std::cout << s
#define prXY(x, y) printf("%d %d", x, y)
#define loop(loop1, loop2) for(int i = loop1; i < loop2; i++)
#define rloop(loop1, loop2) for(int i = loop2; i > loop1; i--)
#define loop2(loop3, loop4) for(int j = loop3; j < loop4; j++)
#define rloop2(loop3, loop4) for(int j = loop4; j > loop3; j--)
#define test printf("\nTEST\n")
#define loc setlocale( LC_ALL, "Russian")
#define nrg std::ios_base::sync_with_stdio(false); std::cin.tie(0); std::cout.tie(0)	//don't use it with printf! it makes cout run faster than printf
#define files freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#define line printf("\n")
#define pi 3.14159265
#define PI acos(-1.0)
typedef long long           ll;
typedef unsigned long long  ull;

const ll LIM = 1e10;		//17
const double Pi = acos(-1.0);

int x, y, n, m, ans;
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/

int main() {
	nrg;
	int t = 0;
	std::cin >> n >> t;
	scS;
	std::string s1 = s;
	
	loop(0, t) {
		loop2(0, n-1)
			if(s[j] == 'B' && s[j+1] == 'G')
				std::swap(s1[j], s1[j+1]);
		s = s1;
	}
	
	std::cout << s;
	
	return 0;
}