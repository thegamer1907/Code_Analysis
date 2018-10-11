//#define LOCAL
#include <iomanip>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <cmath>
#include <map>
#include <set>
#include <string>
#include <sstream>
#include <iostream>
#include <cstring>
#define mem(a) memset(a,0,sizeof(a))
const double PI=acos(-1.0);
using namespace std;
struct Node
{
    string words;
    int knows;
};
bool operator <(const Node& n1,const Node& n2){return n1.knows>n2.knows;}
const int MAXN=1024;
Node poland[MAXN],enemy[MAXN];
int n,m;
map<string,int> M;
set<string> said;
bool have(int pi)
{
    while(pi<n&&said.count(poland[pi].words))pi++;
    return pi<n;
}
int main() {
#ifdef LOCAL
    freopen("#.txt", "r", stdin);
#endif
    while(scanf("%d%d",&n,&m)==2)
    {
        for(int i=0;i<n;i++)cin>>poland[i].words,poland[i].knows=0;
        for(int i=0;i<m;i++)cin>>enemy[i].words,enemy[i].knows=0;

        M.clear();
        for(int i=0;i<n;i++)
        {
            if(M.count(poland[i].words))M[poland[i].words]=M[poland[i].words]+1;
            else M[poland[i].words]=1;
        }
        for(int i=0;i<m;i++)
        {
            if(M.count(enemy[i].words))M[enemy[i].words]=M[enemy[i].words]+1;
            else M[enemy[i].words]=1;
        }

        for(int i=0;i<n;i++)
            poland[i].knows=M[poland[i].words];
        for(int i=0;i<m;i++)
            enemy[i].knows=M[enemy[i].words];

        sort(poland,poland+n);
        sort(enemy,enemy+m);
        said.clear();
        int pi,ei;
        pi=ei=0;
        bool enemyFail=false;
        while(pi<n&&ei<m)
        {
            while(pi<n&&said.count(poland[pi].words))
                pi++;
            if(pi<n)said.insert(poland[pi].words);
            else break;
            while(ei<m&&said.count(enemy[ei].words))
                ei++;
            if(ei<m)
            said.insert(enemy[ei].words);
            else enemyFail=true;
        }
        if(enemyFail)printf("YES\n");else printf("NO\n");
//        while(pi<n&&said.count(poland[pi].words))pi++;
//        while(ei<m&&said.count(enenm[ei].words))ei++;

//        if(pi<n&&have(pi))printf("YES\n");else printf("NO\n");
    }
    return 0;
}
