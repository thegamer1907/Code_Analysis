/*  xzppp  */
#include <iostream>
#include <vector>
#include <cstdio>
#include <string.h>
#include <algorithm>
#include <queue>
#include <map>
#include <string>
#include <cmath>
#include <bitset>
#include <iomanip>
using namespace std;
#define FFF freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
#define MP make_pair
#define PB push_back
#define _ %MOD
typedef long long  LL;
typedef unsigned long long ULL;
typedef pair<int,int > pii;
typedef pair<LL,LL> pll;
typedef pair<double,double > pdd;
typedef pair<double,int > pdi;
const int MAXM = 2e3+17;
const int MAXV = 2*1e3+17;
const int BIT = 15+3;
const int INF = 0x7fffffff;
const LL INFF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9+7;
const int MAXN = 1e2+17;
map<string, int > mp;
string all[MAXN];
int main()
{    
        #ifdef GoodbyeMonkeyKing
    FFF
    #endif
    string str;
    cin>>str;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
    	cin>>all[i];
    	if(all[i]==str)
    	{
    		cout<<"YES"<<endl;
    		return 0;
    	}
    	mp[all[i]] = 1;
    }
    char x = str[0],y = str[1];
    bool xe = false,ye = false;
    for (int i = 0; i < n; ++i)
    {
    	if(all[i][0]==y)
    	{
    		ye = true;
    		break;
    	}
    }
    for (int i = 0; i < n; ++i)
    {
    	if(all[i][1]==x)
    	{
    		xe = true;
    		break;
    	}
    }
    if(xe&&ye)
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;
    return 0;
}