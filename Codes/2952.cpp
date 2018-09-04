#include <bits/stdc++.h>
#define A 77
#define mod 1000000007
using namespace std;

const int N = 1000010;

long long h[N], p[N];

string str;

int n;

int get(int i, int j)
{
	return (h[j]%mod - (h[i-1] * p[j - i + 1])%mod + mod)%mod;
}

bool f(int tam)
{
	int hash = h[tam-1];
	bool flag = false;
	for (int i=1; i + tam - 1 < str.size()-1; i++){
		int j = i + tam - 1;
		if(get(i, j) == hash) return true;
	}
	return false;
}

int main()
{
	cin >> str;
	n = str.size();
	h[0] = str[0], p[0] = 1;
	vector < int > v;
	for (int i=1; i<str.size(); i++){
		h[i] = (h[i-1]*A + str[i])%mod;
		p[i] = (p[i-1]*A)%mod;
	}
	for (int i=0; i<n-1; i++){
		if(h[i] == get(n-(i+1), n-1)) v.push_back(i+1);
	}
	int ans = -1;
	int ini = 0, fim = v.size()-1;
	while (ini <= fim){
		int mid = (ini + fim) >> 1;
		if(f(v[mid])){
			ans = v[mid];
			ini = mid + 1;
		}
		else fim = mid - 1;
	}
	if(ans == -1) puts("Just a legend");
	else cout << str.substr(0, ans) << endl;
}
