//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>
#include <iterator>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <stdio.h>
#include <sstream>
#include <memory.h>
#include <bitset>
#include <cstring>
#include <iomanip>
#include <valarray>
#include <fstream>
#include <functional>
#include <utility>
#include <numeric>

using namespace std;
typedef short int sh;
typedef unsigned short int ush;
typedef long long ll;
typedef unsigned long long ull;


#define ii pair<int, int>
#define vi vector<int>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define lop(i,n) for(int i=0; i<n; i++)
#define rlop(i,n) for(int i=n-1; i>=0; i--)
#define loop(i,start,n) for(int i=start; i<n; i++)
#define rloop(i,end,n) for(int i=n-1; i>=end; i--)
#define in1(u) ll u; cin>>u;
#define in2(u,x) ll u,x; cin>>u>>x;
#define inc(u) char u; cin>>u;
#define ins(u) string u; cin>>u;
#define sc(u) scanf(" %I64d",&u);
#define sc2(u,x) scanf("%lld %lld",&u,&x);
#define pr(u) printf("%d",u);
#define mem(u,x) memset(u,x,sizeof(u));
#define PI 3.14159265

int const diff = 'a' - 'A';
sh const soo = 32767;
int const oo = 2147483647;
ll const loo = 9223372036854775807;
int dx[] = { 0,0,1,-1,1,1,-1,-1 };
int dy[] = { 1,-1,0,0,-1,1,1,-1 };
int amod(int a, int b) {return (a % b + b) % b;}
int const MOD=998244353;

int gcd(int u, int v)
{
	if(v==0)
		return u;
	return gcd(v,u%v);
}


/*
int row,col;
bool ill(int i, int j)
{
return (i > -1 && j > -1 && j < row && i < col);
}*/

ll Mpow(ll base,int power)
{
	if(power<1) return 1;
	ll sqrt= Mpow(base,power>>1)%MOD;
	sqrt=(sqrt*sqrt)%MOD;
	if(power&1)
		return (sqrt*base)%MOD;
	return sqrt;
}

void init()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
}


string s;
int arr[100100];


int main()
{
	init();
	cin>>s;
	arr[0]=s[0]==s[1];
	loop(i,1,s.size()-1)
		arr[i]=arr[i-1]+(s[i]==s[i+1]);
	in1(m);
	lop(i,m)
	{
		in2(l,r);
		l--,r-=2;
		if(l==0)
			cout<<arr[r]<<endl;
		else
			cout<<arr[r]-arr[l-1]<<endl;

	}
	return 0;
}