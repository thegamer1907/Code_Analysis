#include <map>
#include <cmath>
#include <queue>
#include <vector>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
#define inf 0x3f3f3f3f
#define met(a,b) memset(a,b,sizeof(a))
map<int,int> mp1,mp2;
const int maxn = 100+10;
string s,ss[maxn];
int n;
bool flag;

int main()
{
    cin>>s;
    cin>>n;
    flag=false;
    for(int i=0;i<n;i++)
        cin>>ss[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            string ssr=ss[i];
            ssr+=ss[j];
            if(ssr.find(s)!=string::npos)
                flag=true;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
