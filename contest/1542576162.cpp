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
int main()
{    
        #ifdef GoodbyeMonkeyKing
    FFF
    #endif
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    int x1 = h*30,x2 = 6*m,x3 = 6*s;
    int dap = t1*30,zt = t2*30;
    if(dap>zt) swap(dap,zt);
        x1%=360;x2%=360;x3%=360;
    dap%=360;zt%=360;
    if(x1==dap||x1==zt&&(x2!=0||x3!=0)) x1++;
   // cout<<x1<<"  "<<x2<<"   "<<x3<<"   "<<dap<<"  "<<zt<<endl;  
    if(x2==dap||x2==zt&&(x3!=0)) x2+=2;
    if(x3==dap||x3==zt) x3+=3;
    x1%=360;x2%=360;x3%=360;
    dap%=360;zt%=360;
    //cout<<x1<<"  "<<x2<<"   "<<x3<<"   "<<dap<<"  "<<zt<<endl;  
    bool can1 = true;
    int temp = dap;
    while(temp!=zt)
    {
    	//cout<<temp<<endl;
    	    //cout<<x1<<"   "<<x2<<"  "<<x3<<endl;
    	if(temp==x1) can1 = false;if(temp==x2) can1 = false;
    			if(temp==x3) can1 = false;
    	temp++;
    	temp%=360;
    }
    //cout<<"asd"<<can1<<endl;
    bool can2 = true;
    while(dap!=zt)  {
    	//cout<<dap<<endl;
    	if(dap==x1) can2 = false;
    						if(dap==x2) can2 = false;
    								if(dap==x3) can2 = false;
    		dap--;
    							dap = (dap+360)%360;
    }
    //cout<<can2<<endl;
    if(can1||can2)
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;
    return 0;
}