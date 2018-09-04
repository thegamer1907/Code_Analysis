
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repr(i,a,b) for (int i = a; i > b; --i)
#define mm(lamb, tttt) memset(lamb, tttt, sizeof lamb)

#define null NULL
#define eps 0.000000001
#define mod 1000000007
#define PI 3.14159265358979323846
#define pb push_back
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define ALL(V) V.begin(), V.end()
#define sz(V) (int)V.size()
#define _ <<" "<<

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stack>
#include <queue>
#include <deque>
#include <vector>
#include <iterator>
#include <bitset>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <cassert>
#include <limits.h>
#include <iomanip>
#include <cctype>
#include <numeric>
#include <complex>

using namespace std;

typedef long long ll;
typedef vector <int> vi;
typedef pair <int, int> ii;
typedef pair<int, pair<int,int> > iii;
typedef vector<ii> vii;

string s;
int n;
int z[1000100];
int helper[1000100];
vi indexed;

void calcZ()
{
	z[0] = -1;
	int l = 0,r = 0;
	int temp = 0;
	while(temp < n-1 && s[temp] == s[temp+1]) temp++;
	z[1] = temp;
	l = 1, r = temp;
	rep(i, 2, n)
	{
		if (i > r)
		{
			temp = 0;
			while(temp < n-i and s[temp] == s[temp+i]) temp++;
			z[i] = temp, l = i, r = i + temp - 1;
		}
		else
		{
			int k = i - l;
			if (z[k] < r - i + 1)
			{
				z[i] = z[k];
			}
			else
			{
				temp = r - i + 1;
				while(temp < n-i and s[temp] == s[temp+i]) temp++;
				z[i] = temp, l = i, r = i + temp - 1;
			}
		}
	}
}



int main()
{
	ios_base::sync_with_stdio(false);
	cin>>s;
	n = sz(s);
	calcZ();
	repr(i, n-1, 0)
	{
		if (z[i] == n-i) indexed.pb(n-i);
//		cout<<i _ z[i] _ n-i<<"\n";
	}
	sort(ALL(indexed));
//	cout<<indexed[0]<<"\n";
	rep(i, 0, n+2) helper[i] = -1;
	rep(i, 0, sz(indexed))
		helper[indexed[i]] = i;
	rep(i, 1, n+2)
		helper[i] = (helper[i] == -1 ? helper[i-1] : helper[i]);
	int mx = -1, myind = -1;
	rep(i, 1, n-1)
	{
		int ind = upper_bound(ALL(indexed), z[i]) - indexed.begin() - 1;
		if (ind < 0) continue;
		if (i +indexed[ind] == n)
		{
			if (ind > 0)
			{
				ind--;
				if (indexed[ind] > mx) mx = indexed[ind], myind = i;
			}
			break;
		}
		if (indexed[ind] > mx)
			mx = indexed[ind], myind = i;
	}
	if (mx == -1) cout<<"Just a legend"<<"\n";
	else
	{
		rep(i, myind, myind + mx)
		{
			cout<<s[i];
		}
		cout<<"\n";
	}
	return 0;
}
