#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define ff first
#define ss second
#define pb push_back
#define db long double
#define INF 1e9
#define fof(i, a, b) for(int i=(a);i<=(b);i++)
#define fho(i, a, b) for(int i=(a);i<(b);i++)
#define pho(i, a, b) for(int i=(a);i>=(b);i--)
#define pfo(i, a, b) for(int i=(a-1);i>=(b);i--)
#define mask(i) ((1 << i) & 1)
#define speed ios_base::sync_with_stdio(false);
 
typedef pair < int , int > ii;
typedef pair < ii , int > iii;
typedef pair < string , int > si;
typedef vector < int > vi;
typedef vector < ii > vii;
typedef vector < vi > vvi;
const long double Pi = acos(-1.0) * 2;
const int N = 1500000;

int n, k, ans = N * 100, pos;
int a[N], f[N];

int main()
{
	cin >> n >> k;
	fof(i, 1, n)
	{
		cin >> a[i];
		f[i] = f[i - 1] + a[i];
	}
	fof(i, 1, n - (k - 1))
		if(ans > (f[i + k - 1] - f[i - 1]))
		{
			ans = f[i + k - 1] - f[i - 1];
			pos = i;
		}
	cout << pos;
}