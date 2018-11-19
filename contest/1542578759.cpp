#include<bits/stdc++.h>
using namespace std;
#define FOR(i,s,e) for(int i = (s); i < (e); i++)
#define FOE(i,s,e) for(int i = (s); i <= (e); i++)
#define FOD(i,s,e) for(int i = (s); i >= (e); i--)
#define ll long long
#define pb push_back
#define mp make_pair

int n, m, x, y, z, k, w, a, b, ans, tmp, l, Q;
char s[205][105], pre[205][15], suff[205][15];
int A[205], B[205];
int freq[1234], v[205][205];

char for_check[12];

void concat(int a, int la, int b, int lb)
{
	w = 0;
	FOD(i, la - 1, 0) for_check[w++] = suff[a][i];
	FOR(i, 0, lb) for_check[w++] = pre[b][i]; 
}

int get_value(int x, int l, int r)
{
	int tmp = 0;
	FOR(i, l, r) tmp *= 2, tmp += s[x][i] - 48;
//	printf("get_value %d %d %d = %d\n", x, l, r, tmp);
	return tmp; 
}

int get_value_concat()
{
	int tmp = 0;
	FOR(i ,0, w) tmp *= 2, tmp += for_check[i] - 48;
//	printf("get concat = %d\n",  tmp);
	return tmp;
}

void check(int a, int b, int len)
{
//	printf("check %d %d %d\n", a, b, len);
	
	if (v[a][b] == 1) return;
	v[a][b] = 1;
	
	if (a <= n)
	{
		m = strlen(s[a]);
		FOR(i, 0, m - len + 1) freq[get_value(a, i, i + len)]++;
	}
	if (b <= n)
	{
		m = strlen(s[b]);
		FOR(i, 0, m - len + 1) freq[get_value(b, i, i + len)]++;
	}
	if (a != -1 && b != -1)
	{
		m = strlen(suff[a]);
		l = strlen(pre[b]);
		
		FOE(i, 1, m) 
		{
			int remain = len - i;
			if (remain <= 0 || remain > l) continue;
			concat(a, i, b, remain);
			freq[get_value_concat()]++;
		}
	}
	
	if (A[a] != -1) check(A[a], B[a], len);
	if (A[b] != -1) check(A[b], B[b], len);
}

void combin_pre(int x, int a, int b)
{
	int w = 0;
	m = strlen(pre[a]);
	FOR(i, 0, m) pre[x][w++] = pre[a][i];
	m = strlen(pre[b]);
	FOR(i, 0, m) if (w < 10) pre[x][w++] = pre[b][i];
}

void combin_suff(int x, int a, int b)
{
	int w = 0;
	m = strlen(suff[b]);
	FOR(i, 0, m) suff[x][w++] = suff[b][i];
	m = strlen(suff[a]);
	FOR(i, 0, m) if (w < 10) suff[x][w++] = suff[a][i];
}

int main ()
{
	
	scanf("%d", &n);
	FOE(i, 1, n) scanf("%s", s[i]);
	
	FOE(i, 1, n)
	{
		m = strlen(s[i]);
		FOR(j, 0, min(m, 10)) pre[i][j] = s[i][j];
		w = 0;
		FOD(j, m - 1, max(0, m - 10)) suff[i][w++] = s[i][j];
	}
	
	FOE(i, 1, n) A[i] = B[i] = -1;
	
	scanf("%d", &Q);
	
	FOE(i, n + 1, n + Q)
	{		
		scanf("%d %d", &a, &b);
		
		A[i] = a;
		B[i] = b;
		
		combin_pre(i, a, b);
		combin_suff(i, a, b);
		
		ans = 10;
		FOE(times, 1, 10) 
		{
			memset(v, 0, sizeof(v));
			FOR(j, 0, 1 << times) freq[j] = 0;
			check(a, b, times);
			FOR(j, 0, 1 << times) if (freq[j] == 0) { ans = times - 1; break; }
			if (ans != 10) break;
		}
		
		
		printf("%d\n", ans);
	}
	
	
	return 0;
}