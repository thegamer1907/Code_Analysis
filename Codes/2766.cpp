#include<bits/stdc++.h>
#define ll long long
#define MOD1 1000000007
#define MOD2 1000000009

using namespace std;

ll vet[1000001], vet2[1000001];
string str, P, T;
int b[1000001], m;

int check(int x, int y, ll z, ll w, int N)
{
	int b = 1;
	//printf("%I64d %I64d\n", ((((vet[N]-vet[y]*z) % MOD1) + MOD1) % MOD1), vet[x]);
	//printf("%I64d %I64d\n", ((((vet2[N]-vet2[y]*w) % MOD2) + MOD2) % MOD2), vet2[x]);
	//printf("\n");
	b &= ((((vet[N]-vet[y]*z) % MOD1) + MOD1) % MOD1) == vet[x];
	b &= ((((vet2[N]-vet2[y]*w) % MOD2) + MOD2) % MOD2) == vet2[x];
	return b;
}

void kmpPre()
{
	int i = 0, j = -1;
	b[0] = -1;
	m = P.length();
	while( i < m)
	{
		while(j >= 0 && P[i] != P[j]) j = b[j];
		i++, j++;
		b[i] = j;
	}
}

int kmpSearch()
{
	int i = 0, j = 0, n = T.size();
	int cont = 0;
	while(i < n)
	{
		while(j >= 0 && T[i] != P[j]) j = b[j];
		i++, j++;
		if(j == m)
		{
			return 1;
			j = b[j];
		}
	}
	return 0;
}


main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> ans;
	int N;
	ll hash, hash2;
	cin >> str;
	N = str.length();
	T = str.substr(1, N-2);
	for(int i = 0; i < N; i++)
	{
		vet[i+1] =  (vet[i]*26+str[i]-'a');
		if(vet[i+1] >= MOD1)
			vet[i+1] %= MOD1;
		vet2[i+1] = (vet2[i]*26+str[i]-'a');
		if(vet2[i+1] >= MOD2)
			vet2[i+1] %= MOD2; 
	}
	/*for(int i = 1; i <= N; i++)
		printf("%I64d ", vet[i]);
	printf("\n");
	for(int i = 1; i <= N; i++)
		printf("%I64d ", vet2[i]);
	printf("\n");*/
	hash = hash2 = 26;
	for(int i = 1; i < N; i++)
	{
		if(check(i, N-i, hash, hash2, N))
			ans.push_back(i);
		hash = hash*26;
		if(hash >= MOD1)
			hash %= MOD1;
		hash2 = hash2*26;
		if(hash2 >= MOD2)
			hash2 %= MOD2;
	}
	int lo = 0, hi = ans.size()-1, mid, resp = -1;
	while(lo <= hi)
	{
		mid = (lo+hi)/2;
		P = str.substr(0, ans[mid]);
		kmpPre();
		if(kmpSearch())
		{
			resp = ans[mid];
			lo = mid+1;
		}
		else
			hi = mid-1;
	}
	cout << ((resp == -1) ? "Just a legend" : str.substr(0, resp));  
	return 0;
}