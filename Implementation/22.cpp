#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>


#define     lf(i,a,n)       for (int i=a;i<n;i++)
#define     ld(i,a,n)    for (int i=n-1;i>=a;i--)
#define     all(x)           (x).begin(),(x).end()
#define     SZ(x)            ((int)(x).size())
#define     CLR(a)           memset(a,0,sizeof(a))
#define     SET(a)           memset(a,-1,sizeof(a))

#define     li               long long int
#define     pii              pair<int,int>
#define     pli              pair<ll,ll>
#define     N                1000010
#define     M                1000000007
#define     fi               first
#define     se               second
#define     pb               push_back
#define     mp               make_pair

using namespace std;

template <class T> inline T gcd(T a, T b) { while (b) { a = a % b;swap(a, b); }return a; }

bool isPrime(int p, int n)
{
	double sqrtn = sqrt(n);

	for (int i = 2; i <= p && i <= sqrtn; i++)
	{
		if (n % i == 0)
			return false;
	}

	return true;
}

int main()
{
	int n, a, b;
	cin >> n >> a >> b;

	vector<int> v;

	for (int i = 1; i <= n; i++)
	{
		v.push_back(i);
	}

	int count = 0;
	while (true)
	{
		count++;

		bool found = false;

		vector<int> res;

		for (int i = 1; i < v.size(); i = i + 2)
		{
			if ((v[i - 1] == a || v[i - 1] == b) && (v[i] == a || v[i] == b))
			{
				found = true;
				break;
            }

			if (v[i] == a || v[i] == b) {
				res.push_back(v[i]);
			}
			else if (v[i - 1] == a || v[i - 1] == b)
			{
				res.push_back(v[i-1]);
			}
			else
			{
				res.push_back(v[i]);
			}
		}
		if (found)
			break;

		v = res;
	}

	if (v.size() == 2)
	{
		cout <<"Final!"<< endl;
	}
	else
	{
		cout << count << endl;

	}


	int x;
	cin >> x;

	return 0;
}