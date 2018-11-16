#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <set>
#include <map>
#include <string.h>
#include <cmath>
#include <bitset>


#define     allPairFirst(v)       v.begin(), v.end(), [](auto &left, auto &right) {return left.first < right.first;}
#define     allPairSecond(v)      v.begin(), v.end(), [](auto &left, auto &right) {return left.second < right.second;}
#define     SZ(x)                 ((int)(x).size())
#define     CLR(a)                memset(a,0,sizeof(a))
#define     SET(a)                memset(a,-1,sizeof(a))


using namespace std;

template <class T> inline T gcd(T a, T b) { while (b) { a = a % b; swap(a, b); }return a; }


int arra2[100009];

int main()
{
	
	int n,m;
	cin >> n>>m;

	vector<int> ab;

	for (int i = 0; i < n; i++)
	{
		int numb;
		cin >> numb;
		ab.push_back(numb);
	}
	map<int, int> asd;

	for (int i = n-1; i>=0; i--)
	{
		if (i == n - 1)
		{
			arra2[i] =1;
		}
		else if (asd.count(ab[i]) > 0) {
			arra2[i] = arra2[i + 1];
		}
		else
		{
			arra2[i] = arra2[i+1]+1;
		}

		asd[ab[i]]++;
	}

	for (int i = 0; i < m; i++)
	{
		int q;
		cin >> q;
		cout << arra2[q - 1] <<endl;
	}

	int xxxxx;
	cin >> xxxxx;

	return 0;
}