#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#include <functional>
#include <numeric>
using namespace std;
#define all(v) (v).begin(),(v).end()
#define SRT(v) sort(all(v))
#define rall(v) (v).rbegin(),(v).rend()
#define rSRT(v) sort(rall(v))
#define sz(a) int((a).size())
#define watch(x) cout<<(#x)<<" = "<<x;
#define MP make_pair
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const ll Mod = 1e9+7;
const double pi = 2*acos(0.0);


int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n; 
	cin>>n; 
	int x = 0, y = 0, z = 0; 
	for(int i = 0; i<n; i++)
	{
		int nx, ny, nz;
		cin>>nx>>ny>>nz;
		x += nx; y += ny; z+=nz;

	}
	if(x==0 && y==0 && z==0)
		cout<<"YES";
	else
		cout<<"NO";

	return 0;
}
