#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <set>
#include <map>
#include <string.h>


#define     lf(i,a,n)            for (int i=a;i<n;i++)
#define     ld(i,a,n)            for (int i=n-1;i>=a;i--)
#define     all(x)               (x).begin(),(x).end()
#define     allPairFirst(v)       v.begin(), v.end(), [](auto &left, auto &right) {return left.first < right.first;}
#define     allPairSecond(v)      v.begin(), v.end(), [](auto &left, auto &right) {return left.second < right.second;}
#define     SZ(x)                 ((int)(x).size())
#define     CLR(a)                memset(a,0,sizeof(a))
#define     SET(a)                memset(a,-1,sizeof(a))

#define     li                    long long int
#define     pii                   pair<int,int>
#define     pli                   pair<ll,ll>
#define     N                     200100
#define     M                     1000000007
#define     fi                    first
#define     se                    second
#define     pb                    push_back
#define     mp                    make_pair

using namespace std;

template <class T> inline T gcd(T a, T b) { while (b) { a = a % b; swap(a, b); }return a; }



int main()
{
	int n, t;
	cin >> n >> t;

	string str;

	cin >> str;

	for (int m = 1; m <= t; m++)
	{
		for (int i = 1; i < n; i++)
		{
			if (str[i - 1] == 'B' && str[i]=='G') {
				swap(str[i - 1], str[i]);
				i++;
			}
		}
	}

	cout << str << endl;

	int xxxxx;
	cin >> xxxxx;

	return 0;
}