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

set<char> a,b;

int main()
{
    string s;
    while(cin>>s)
    {
        bool flag=0;
        int n;
        sc("%d",&n);
        a.clear(),b.clear();
        for(int i=0;i<n;i++)
        {
            string c;
            cin>>c;
            if(s==c) flag=1;
            a.insert(c[0]);
            b.insert(c[1]);
        }
        if(b.find(s[0])!=b.end() && a.find(s[1])!=a.end()) flag=1;
        pr("%s\n",flag?"YES":"NO");
    }
    return 0;
}
