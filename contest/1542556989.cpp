#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ll> l4;

#define mp make_pair
#define pb push_back

char s[3], tar[3];
bool front[300] = {false}, back[300] = {false};

int main()
{
  scanf("%s", tar);
  int n;
  scanf("%d", &n);
  bool ans = false;
  for (int i = 0; i < n; ++i)
    {
      scanf("%s", s);
      front[s[0]] = true;
      back[s[1]] = true;
      if (s[0]==tar[0] && s[1]==tar[1])
	{
	  ans = true;
	  break;
	}
    }
  if (front[tar[1]] && back[tar[0]])
    ans = true;
  puts(ans?"YES":"NO");

}
