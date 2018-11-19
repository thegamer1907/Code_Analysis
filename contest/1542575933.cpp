#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define pii pair < int , int >
#define pipii pair < int , pii >
#define pid pair <int, double>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define pp pop_back()
#define sz size()
#define iz insert
#define lg length()
#define FRNAME "A"
#define inf (int)1e6
#define fr freopen(FRNAME".in","r",stdin); freopen (FRNAME".out","w",stdout);
#define fr2 freopen("input.txt","r",stdin); freopen ("output.txt","w",stdout)
int n, k;
unordered_map <int, bool> q;
int a[5];
int main ()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		int cur = 0;
		int p = 1;
		for (int j = 0; j < k; j++)
		{
			cin >> a[j];
			cur += p * a[j];
			p *= 2;
		}
		int wow = 15;
		wow = (wow^cur);
		for (int j = 0; j < 16; j++)
		{
			int w = cur;
			int qqq = 0;
			for (int  l = 0; l < 4; l++)
			{
				if(a[l]) continue;
				int tmp = (1<<l);
				if((j&tmp))
				{
					qqq++;
					w|=tmp;
				}	
			}
			q[w] = true;
		}	
		if(q[wow]) 
		{
			cout << "YES";
			return 0;
		}	
	}
	cout << "NO";		
	return 0;
}