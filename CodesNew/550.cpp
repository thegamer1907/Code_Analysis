#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10000005;

int n, m, l, r, x;

int c[MAXN],f[MAXN];

bool vis[MAXN];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  cerr.tie(nullptr);

  cin >> n;
	for (int i=1;i<=n;i++)
	{
    cin >> x;
		c[x]++;
	}

	for (int i=2; i<MAXN; i++) {
	  if (!vis[i]) {
	    for (int j=i;j<MAXN; j+=i) {
		    vis[j]=1;
		  f[i]+=c[j];
      }
    }
	}
	for (int i=2;i<MAXN;i++)
	  f[i]+=f[i-1];
  cin >> m;
	while (m--)
	{
    cin >> l >> r;
		if (l>=MAXN)l=MAXN-1;
		if (r>=MAXN)r=MAXN-1;
		printf("%d\n",f[r]-f[l-1]);
	}
}
