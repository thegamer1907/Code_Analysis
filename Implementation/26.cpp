#define _CRT_SECURE_NO_WARNINGS 
void Solve(); int main() { Solve(); }
#include <iostream> 
#include <cmath> 
#include <algorithm> 
#include <cstdlib> 
#include <string> 
#include <vector> 
#include <set> 
#include <map> 
#include <iomanip> 
#include <bitset> 

using namespace std;
#define int long long 
#define endl '\n' 
#define fib(i, n) for (int i = n; i >= 0; i--) 
#define fi(i,a,b) for(int i = (a); i < (b); i++) 
#define MAX 1 << 10 
#define pb push_back

 

void Solve() {
#ifdef _DEBUG 
	freopen("input.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif 
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
	int n;
	int a, b;
	cin >> n >> a >> b;
	a--; b--;
	int ret = 0;
	while (true)
	{
		if (a == b) break;
		ret++;
		a >>= 1;
		b >>= 1;
		n >>= 1;
	}
	if (n == 1)
	{
		cout << "Final!" << endl;
	}
	else
	{
		cout << ret << endl;
	}
	
}
