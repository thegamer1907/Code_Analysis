/*  xzppp  */
#include <iostream>
#include <vector>
#include <cstdio>
#include <string.h>
#include <algorithm>
#include <queue>
#include <set>
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
#include <map>
const int MAXN = 1e5+17;
struct dap
{
	int s;
	string str;
}all[MAXN];
set<int > st[4+3];
map<string,int > mp;
int main()
{    
        #ifdef GoodbyeMonkeyKing
    FFF
    #endif
    int n,k;
    cin>>n>>k;
    int mx = 0;
    int tm[4+3]= {0};
    for (int i = 0; i < n; ++i)
    {
    	int sm = 0;
    	all[i].str.clear();
    	for (int j = 0; j < 4; ++j)
    	{
    		
    		int temp;
    		if(j<k)    		
    			scanf("%d",&temp);
    		else
    			temp = 0;
    		all[i].str.push_back(temp+'0');
    		if(temp==0)
    		{
    			st[j].insert(i);
    			all[i].s++;
    			sm++;
    		}
    	}
    	if(k==4)
    	{
    		mp[all[i].str] = 1;
    		//cout<<all[i].str<<endl;
    	}
    	if(sm>=mx)
    	{
    		mx = sm;
    	}
    }
    //cout<<mx<<endl;
    if(k==1)
    {
    	if(!st[0].empty())
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;
    }
    else if(k==2)
    {
    	if(!st[0].empty()&&!st[1].empty())
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;
    }
    else if(k==3)
    {
    	mx--;
    	if(mx<2)
    		cout<<"NO"<<endl;
    	else if(mx==3)
    		cout<<"YES"<<endl;
    	else
    	{
    		if(!st[0].empty()&&!st[1].empty()&&!st[2].empty())
    			cout<<"YES"<<endl;
    		else
    			cout<<"NO"<<endl;
    	}
    }
    else
    {
    	if(mx<2)
    		cout<<"NO"<<endl;
    	else if(mx==4)
    		cout<<"YES"<<endl;
    	else if(mx==3)
    	{
    		if(!st[0].empty()&&!st[1].empty()&&!st[2].empty()&&!st[3].empty())
    			cout<<"YES"<<endl;
    		else
    			cout<<"NO"<<endl;
    	}
    	else
    	{
    		if(mp["1001"]==1&&mp["0110"]==1)
    			cout<<"YES"<<endl;
    		else if(mp["1100"]==1&&mp["0011"]==1)
    			cout<<"YES"<<endl;
    		else if(mp["1010"]==1&&mp["0101"]==1)
    			cout<<"YES"<<endl;
    		else
    			cout<<"NO"<<endl;
    	}

    }
    return 0;
}