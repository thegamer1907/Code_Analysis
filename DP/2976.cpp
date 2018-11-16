#include <bits/stdc++.h>
#define DIM 100007
#define INF 1000000000000007LL
using namespace std;

long long n,d[DIM][2],c[DIM];
string s[DIM];

bool cmp(string &s1,string &s2)
{
    return s1<=s2;
}
int main()
{
    cin>>n;
    for(int i = 1; i <= n; ++i)
        cin>>c[i];

    for(int i = 1; i <= n; ++i)
        cin>>s[i];
    d[1][1] = c[1];
    for(int i = 2; i <= n; ++i)
    {
        d[i][0] = INF;
        string tmp = s[i-1];
        if(cmp(tmp,s[i]))
        {
            d[i][0] = min(d[i][0],d[i-1][0]);
        }
        reverse(tmp.begin(),tmp.end());
        if(cmp(tmp,s[i]))
        {
            d[i][0] = min(d[i][0],d[i-1][1]);
        }

        d[i][1] = INF;
        tmp = s[i-1];
        string tmpsr = s[i];
        reverse(tmpsr.begin(),tmpsr.end());

        if(cmp(tmp,tmpsr))
        {
            d[i][1] = min(d[i][1],d[i-1][0] + c[i]);
        }
        reverse(tmp.begin(),tmp.end());
        if(cmp(tmp,tmpsr))
        {
            d[i][1] = min(d[i][1],d[i-1][1] + c[i]);
        }
    }
    if(d[n][0] == INF && d[n][1] == INF) return cout<<-1,0;
    cout<<min(d[n][0],d[n][1]);
    return 0;
}