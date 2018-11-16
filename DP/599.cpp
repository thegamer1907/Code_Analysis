//Chua Can Nguoi Yeu
#include <bits/stdc++.h>
#define sz(x) int(x.size())
#define reset(x) memset(x, 0,sizeof(x))
#define MIN(x,y) if (x > (y)) x = (y)
#define MAX(x,y) if (x < (y)) x = (y)
#define PB push_back
#define mp make_pair
#define F first
#define S second
#define Task "TILE"
#define maxn 100005
#define MOD 1000000007
#define remain(x) if (x > MOD) x -= MOD
#define pii pair<int, int>
#define ll long long

using namespace std;
long long m,f[100002],l,r;
string s;
int main()
{
    cin>>s>>m;
    for(long i=s.length()-2; i>=0; i--)
        f[i]=f[i+1]+(s[i]==s[i+1]);
    while(m--)
    {
        cin>>l>>r;
        cout<<f[l-1]-f[r-1]<<endl;
    }
}





//https://www.wattpad.com/442487390-truy%E1%BB%87n-li%C3%AAn-qu%C3%A2n-mobile-ch%C6%B0%C6%A1ng-12-hai-con-ng%C6%B0%E1%BB%9Di
