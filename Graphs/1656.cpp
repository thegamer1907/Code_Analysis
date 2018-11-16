#include <bits/stdc++.h>
#include <algorithm>
#include <functional>
#include <numeric>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <complex>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <cassert>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <sstream>
using namespace std;
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
typedef long long ll;
#define mod 1000000007
ll arr[30001];
int temp=0;
void DFS(ll start,ll end)
{
	if(start==end)
	{
		cout<<"YES"<<endl;
		return;
		}	
	if(start>end) 
	{
		cout<<"NO"<<endl;return;
	}	
		
	DFS(start+arr[start],end);
	
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,t;
	cin>>n>>t;
	
	for(ll i=1;i<n;i++)	cin>>arr[i];
	
	DFS(1,t);	
		
	
	return 0;
}

