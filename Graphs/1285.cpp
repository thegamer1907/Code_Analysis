#pragma comment(linker, "/STACK:256000000")

#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE 
#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <cstring>
#include <string>
#include <utility>
#include <vector>
#include <fstream>
#include <iterator>
#include <functional>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <ctime>
#include <bitset>  


#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define rep0(i,n) for (int i=0; i<int(n); ++i)
#define rep0r(i,n) for (int i=n-1; i>=0; --i)
#define repa(i,a,b) for (int i=(a); i<int(b); ++i)
#define sq(x) ((x)*(x))
#define pi 3.141592653589793238462643383279502884197169399375105820974944
#define pii pair<int, int>
#define pll pair<long long, long long>
#define rs resize


using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const long double EPS = 1e-12;
const int maxnn = 1007;

int n, t;
vector<int> a;
int cur = 1;


int main()
{

#ifdef _MY_DEBUG
	freopen("input.txt", "rt", stdin); freopen("output.txt", "wt", stdout);
#endif // _MY_DEBUG

	ios_base::sync_with_stdio(false); cin.tie(0);
	//cout.precision(16);
	//cout.setf(ios::fixed, ios::floatfield);
	//freopen("input.txt", "rt", stdin); freopen("output.txt", "wt", stdout);
	//srand(time(NULL));
	//fflush (stdout);
	
	cin>>n>>t;
	a.rs(n);
	rep0(i,n-1)
	{
	    cin>>a[i];
	    a[i]+=(i+1);
	}
	a[n-1] = n;
	rep0(i,2*n)
	{
	    cur = a[cur-1];
	    if(cur==t)
	    {
	        cout<<"YES";
	        return 0;
	    }
	}

    cout<<"NO";

	return 0;
}