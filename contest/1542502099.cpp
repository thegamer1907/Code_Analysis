#include <iostream>
#include <string.h>
#include <algorithm>
#include <stdio.h>
#include <string>
#include <map>
#include <vector>
#include <cmath>
#include <set>
#define ll long long
#define PI 3.1415926535
#define AC ios::sync_with_stdio(0)
using namespace std;
const int inf=1e5+10;
#define MAXN 1000
/*struct pt{
ll x;
ll y;
ll d;
}p[inf];
bool cmp(const pt& a,const pt& b)
{
  return a.d<b.d;
}*/
//int dit[4][2]={-1,0,0,1,1,0,0,-1};
string s;
string q[110];
int main()
{
   int n;
    cin>>s;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>q[i];
        if(q[i]==s)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if((q[i][1]==s[0]&&q[j][0]==s[1])||(q[j][1]==s[0]&&q[i][0]==s[1]))
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
}
