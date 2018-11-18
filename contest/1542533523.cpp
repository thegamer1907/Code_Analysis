/*input
ya
4
ya
oy
to
ha
*/
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define dbg2a(x,y,z) cerr << #x << '[' << y << "][" << z << "] = " << x[y][z] << '\n';
#define Inf 2e9

int n;
string s,t[101];

int main()
{
	cin >> s >> n ;
	for(int i = 0;i < n;++i)
		cin >> t[i];
	for(int i = 0;i < n;++i)
	{
		if(s == t[i])  return ! printf("YES\n");
		if(t[i][1]==s[0])
		{
			for(int j = 0;j < n;++j)
			{
				if(t[j][0] == s[1]) return ! printf("YES\n");
			}
		}
		if(t[i][0]==s[1])
		{
			for(int j = 0;j < n;++j)
			{
				if(t[j][1] == s[0]) return ! printf("YES\n");
			}
		}
	}
	return ! printf("NO\n");;
}