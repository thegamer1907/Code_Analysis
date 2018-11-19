#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define fi first
#define se second
#define llong long long

#define pb push_back
#define files freopen("stars.in","r",stdin);freopen("stars.out","w",stdout);

string s,c;
int n ,k;
bool t1=false,t=false;
/*
llong sum(int x,int y,int z)
{

    llong res=0;
    for(;x>=0;x=(x&(x+1))-1)
    {
        int w = y;
        for(;w>=0;w=(w&(w+1))-1)
        {
            int f = z;
            for(;f>=0;f=(f&(f+1))-1)
            {
                res+=t[x][w][f];
            }
        }
    }
    return res;
}

void inc(int x, int y, int z, llong delta)
{
    for (;x <= n; x=(x|(x+1)))
    {
        int w = y;
        for (;w <= n; w=(w|(w+1)))
        {
            int f = z;
            for (;f <= n; f=(f|(f+1)))
            {
                t[x][w][f]=max(t[x][w][f]+delta,0ll);
            }
        }
    }
}
*/
vector<string> s1;

int main()
{
  //  files;
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> s;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> c;
        s1.pb(c);
    }
    for (int i=0;i<n;i++)
    {
        if (s1[i][1]==s[0])
            t=true;
        if (s1[i][0]==s[1])
            t1=true;
        if (s1[i][0]==s[0] && s1[i][1]==s[1])
        {
            cout << "YES";
            return 0;
        }
    }
    if (t && t1) cout << "YES";
        else cout << "NO";
    return 0;
}
