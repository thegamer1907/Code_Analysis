#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#include <algorithm>
#include <stack>
#include <istream>
#include <stdio.h>
#include <map>
#include <math.h>
#include <vector>
#include <iostream>
#include <queue>
#include <string.h>
#include <set>
#include <cstdio>
#define FR(i,n) for(int i=0;i<n;i++)
#define MAX 2005
#define mkp pair <int,int>
using namespace std;
#include <bits/stdc++.h>
const int maxn =2e6 + 40;
typedef long long ll;
const ll  inf = 0x3ffffff;
void read(ll &x) {
	char ch; bool flag = 0;
	for (ch = getchar(); !isdigit(ch) && ((flag |= (ch == '-')) || 1); ch = getchar());
	for (x = 0; isdigit(ch); x = (x << 1) + (x << 3) + ch - 48, ch = getchar());
	x *= 1 - 2 * flag;
}

ll n,m;
ll sub[maxn];
ll val[maxn];
int main() {
    read(n),read(m);
    for(int i=0;i<n;i++)read(val[i]);sub[0]=val[0];
    for(int i=1;i<n;i++)sub[i]+=sub[i-1]+val[i];
    int st = 0;
    ll sum = 0;
    for(int i=0;i<m;i++)
    {
        ll tmp;
        read(tmp);
       // tmp=tmp;
       ll h = tmp;
        tmp+=sum;
        //cout<<tmp << endl;
        int id = lower_bound(sub,sub+n,tmp)-sub;
        //cout<<id<<endl;
        if(sub[id]>tmp)id-=1;
        if(sub[id]==tmp&&id==n-1)id=n;
       // if(sub[id]==tmp)id+=1;
        if(id==n||id==n-1)printf("%d\n",n);
        else printf("%d\n",n-(id+1));
        sum += h;
        if(id==n||id==n-1)id=0,sum=0;
    }
    return 0;
}











