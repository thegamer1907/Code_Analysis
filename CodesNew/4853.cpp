#include<bits/stdc++.h>
#define ll long long int
#define MAX 200300
using namespace std;



ll p[MAX],q[MAX];
ll n, m, st, en, mid;
char a[MAX];
char b[MAX];


bool my_f(ll num) 
{
    ll k = 1;
	for (ll i = 1; i <= n; i ++) 
	{
		if (q[i] > num && a[i] == b[k]) 
			k++;
		if (k == m + 1) 
			return true;
	}
	if (k == m + 1) 
		return true;
	return false;
}



ll my_p(ll base, ll exp)
{
	ll res = 1;
	for(ll i=1; i<=exp; i++)
	{
		res *= base;
	}
	return res;
}
int main() 
{	
	
	
	#ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
	
	scanf("%s%s", a + 1, b + 1);
	n = strlen(a + 1);
	m = strlen(b + 1);
	//getline(cin,a);
	//getline(cin,b);
	//cout << a << "\n\n" << b << "\n";
	//n = a.length()+1;
	//m = b.length()+1;
	for (ll i = 1; i <= n; i ++) 
	{
		cin >> p[i];
		q[p[i]] = i;
	}
	st = 0;
	en = n;
	while (en - st > 1) 
	{
		mid = st + en >> 1;
		if (my_f(mid)) 
			st = mid;
		else 
			en = mid;
	}
	cout << st << "\n";
	return 0;
}