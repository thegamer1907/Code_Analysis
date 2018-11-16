#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <bitset>
#include <cassert>

#define mp make_pair
#define pb push_back

using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

const int INF = 1e9;
const double eps = 1e-9;
const int mod = 1e9 + 7;

int gcd(int a, int b)
{
	while(b!=0)
	{
		a %= b;
		swap(a, b);
	}
	return a;
}

int nok(int a, int b)
{
	return a / gcd(a, b) * b;
}

int n, a, b, k = 1;

bool ch(int a, int b)
{
	if(a%2 == 1 && a + 1 == b)
		return true;
	if(b%2 && b + 1 == a)
		return true;
	return false;
}

int main()
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, a, b;
	cin >> n >> a >> b;
	while(n!=2)
	{
		if(ch(a, b))
		{
			if(n==2)
				cout<<"Final!";
			else
				cout<<k;
			return 0;
		}
		n/=2;
		a = (a + 1) / 2;
		b = (b + 1) / 2;
		k++;
	}
	cout<<"Final!";
	return 0;
}