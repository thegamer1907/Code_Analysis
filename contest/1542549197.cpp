#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<ll> vll;
#define FOR(i,n) for (i = 0; i < n; ++i)
#define FORK(i,k,n) for (i = k; i <= n; ++i)
#define FORR(i,k,n) for (i = k; i >= n; --i)

#define re(a,b)   memset(a,b,sizeof(a))
#define sz(a)      (int)(a.size())
#define MIN(a,b)     (a) = min((a),(b))
#define MAX(a,b)     (a) = max((a),(b))
#define input(in)    freopen(in,"r",stdin)
#define output(out)  freopen(out,"w",stdout)
#define ALL(a)       a.begin(),a.end()
#define RALL(a)      a.rbegin(),a.rend()
#define LEN(a)       (int)(a.length())

#define FIN(x)       freopen(x,"r",stdin)
#define FOUT(x)      freopen(x,"w",stdout)
#define FCLOSE       {fclose(stdin); fclose(stdout);}

#define fi           first
#define se           second
#define pb           push_back
#define mp           make_pair
#define  M           100001
#define INF          1001001001

int main()
 {
    ios_base::sync_with_stdio(false);  cin.tie(0);cout.tie(0);
    string m,s;
    cin >> s;
    int n,i,j;
    cin >> n;
    vector<string> a;
    bool f3=false;
    FOR(i,n)
    {
        cin >> m;
        if(m==s)
            f3=true;
        a.pb(m);
    }
    if(f3==true)
        cout << "YES";
    else
    {
    bool f1=false,f2=false;
    FOR(i,n)
    {
        if(a[i][1]==s[0])
        {
            f1=true;
            break;
        }
    }
    FOR(i,n)
    {
        if(a[i][0]==s[1])
        {
            f2=true;
            break;
        }
    }
    if(f1==true && f2==true)
        cout << "YES";
        else
        cout << "NO";
    }
   return 0;
}
