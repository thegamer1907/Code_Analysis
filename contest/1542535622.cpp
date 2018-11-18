#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n, m;
//double ans[2];
//bool visted[400000];
//int mp[1000000];
//int arr[1000000];
vector < pair<ll, ll>> vec;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);
	long long   a = 0, b = 0, c = 0, t, lj = 0, k = 0, r = 0, l = 0, sum = 0, d, rr, mn = INT_MAX, mx = INT_MIN, w, y, x;
	string s,s1="", s2="", s3="";
	cin >> s >> n;
	int fir = 0, sec = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> s1;
		if (s1 == s)return cout << "YES", 0;
		//if (s1[0] == s[0])a == 2 ? a = 4 : a = 1;
		if (s1[0] == s[1])a == 1 ? a = 4 : a = 2;

		//if (s1[1] == s[1])b==1?b=4:b = 2;
		if (s1[1] == s[0])b==2?b=4:b = 1;
		if (a + b == 3)return cout << "YES", 0;
	}
	cout << "NO";
}







