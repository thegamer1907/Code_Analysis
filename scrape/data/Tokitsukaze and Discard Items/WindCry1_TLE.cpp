/*************************************************************************
	> File Name: 1191 C.cpp
	> Author: WindCry1
	> Mail: lanceyu120@gmail.com 
	> Created Time: 7/12/2019 11:08:45 PM
 ************************************************************************/

#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <sstream>
#include <bitset>
#include <complex>
#include <iomanip>
#include <bitset>
#include <cctype>
#include <ctime>
#define ll long long
using namespace std;
const int INF = 0x3f3f3f3f;
const int MMAX = 0x7fffffff;
const int mod = 1e9+7;
vector<ll> v;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("C:\Users\LENOVO\Desktop\out.txt","w",stdout);
    //freopen("C:\Users\LENOVO\Desktop\in.txt","r",stdin);
	ll n,m,k,t;
	scanf("%lld%lld%lld",&n,&m,&k);
	for(ll i=1;i<=m;i++)
	{
		scanf("%lld",&t);
		v.push_back(t);
	}
	ll cnt=0,i=k,res=0;
	while(true)
	{
		ll flag=0,j;
		for(j=0;j<v.size();j++)
			if(v[j]>i+cnt)
				break;
		if(j!=0)
		{
			v.erase(v.begin(),v.begin()+j);
			flag=1;
			cnt+=j;
		}
		if(flag)
			res++;
		if(!flag)
			i=((v[0]-cnt-1)/k+1)*k;
		if(v.empty())
			break;
	}
	printf("%lld\n",res);
    return 0;
}