#include<set>
#include<map>
#include<stack>
#include<queue>
#include<ctime>
#include<cmath>
#include<vector>
#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
#include<algorithm>
#define sc scanf
#define pr printf
#define MP make_pair
#define PB push_back
#define lson l,m,i<<1
#define rson m+1,r,i<<1|1
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;

typedef double db;
typedef long long ll;

set<string> s;

bool f(string str)
{
    return s.find(str)!=s.end();
}

int main()
{
    int n,k;
    while(~sc("%d%d",&n,&k))
    {
        s.clear();
        for(int i=0;i<n;i++)
        {
            char str[5];
            for(int i=0;i<k;i++)
            {
                int x;
                sc("%d",&x);
                sprintf(str+i,"%d",x);
            }
            s.insert(str);
        }
        bool fl=0;
        if(k==1) fl= f("0");
        if(k==2) fl= f("00") || ( f("10") && f("01") );
        if(k==3)
        {
            fl|=f("000");
            int num = f("100")+f("010")+f("001");
            fl|= (num>1);
            fl|= ( f("110") && f("001"));
            fl|= ( f("101") && f("010"));
            fl|= ( f("011") && f("100"));
        }
        if(k==4)
        {
            fl|=f("0000");
            int num = f("1000")+f("0100")+f("0010")+f("0001");
            fl|= (num>1);
            fl|= ( f("1100") && f("0011"));
            fl|= ( f("1010") && f("0101"));
            fl|= ( f("1001") && f("0110"));
            
            fl|= ( f("1000") && ( f("0111") || f("0011") || f("0101") || f("0110") ) );
            fl|= ( f("0100") && ( f("1011") || f("1010") || f("1001") || f("0011") ) );
            fl|= ( f("0010") && ( f("1101") || f("1100") || f("0101") || f("1001") ) );
            fl|= ( f("0001") && ( f("1110") || f("1100") || f("1010") || f("0110") ) );
            
        }
         pr("%s\n",fl?"YES":"NO");
    }
    return 0;
}
