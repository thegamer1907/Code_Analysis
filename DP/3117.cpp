#include <bits/stdc++.h>
using namespace std;
#define fl(i,a,n) for (int i=a;i<n;i++)
#define rfl(i,a,n) for (int i=n-1;i>=a;i--)
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
typedef long long ll;
typedef pair<int,int> PII;
const ll mod=1000000007;
template <typename T> T gcd(T a, T b) { return b != 0 ? gcd(b, a % b) : a; }
/*std::cout << std::fixed;
std::cout << std::setprecision(2);*/
int dpr[500][500];
int dpc[500][500];
int dp1[500][500];
int dp2[500][500];
int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int h,w;
    cin >> h >> w;
    string s[h];
    fl(i,0,h)
    {
        cin >> s[i];
    }
    fl(i,0,h)
    {
        int count=0;
        int prev=0;
        fl(j,0,w)
        {
            if(s[i][j]=='.')
            {
                count++;
                dpr[i][j]=count-1+prev;
            }
            else
            {
                count=0;
                if(j!=0)
                {
                    dpr[i][j]=dpr[i][j-1];
                    prev=dpr[i][j]=dpr[i][j-1];
                }
            }
        }
    }
    fl(i,0,w)
    {
        int count=0;
        int prev=0;
        fl(j,0,h)
        {
            if(s[j][i]=='.')
            {
                count++;
                dpc[i][j]=count-1+prev;
            }
            else
            {
                count=0;
                if(j!=0)
                {
                    dpc[i][j]=dpc[i][j-1];
                    prev=dpc[i][j]=dpc[i][j-1];
                }
            }
        }
    }
    fl(i,0,h)
    {
        int f=-1;
        for(int j=w-1;j>=0;j--)
        {
             if(s[i][j]=='.')
             {
                dp1[i][j]=f;
             }
             else
             {
                f = j;
             }
        }
    }
    fl(i,0,w)
    {
        int f=-1;
        for(int j=h-1;j>=0;j--)
        {
            if(s[j][i]=='.')
             {
                dp2[i][j]=f;
             }
             else
             {
                f = j;
             }
        }
    }
    int q;
    cin >> q;
    int a,b,c,d;
    while(q--)
    {
        ll ans=0;
        cin >> a >> b >> c >> d;
        a--;b--;c--;d--;
        fl(i,a,c+1)
        {
            if(s[i][b]=='#')
            {
                ans+=dpr[i][d]-dpr[i][b];
            }
            else
            {
                int x = dp1[i][b];
                if(x==-1||x>d)
                {
                    int x = dpr[i][b]+1;
                    int y = dpr[i][d]+1;
                    ans+=y-x+1-1;
                }
                else
                {
                    int x = dp1[i][b];
                    ans+=x-b-1;
                    ans+=dpr[i][d]-dpr[i][x];
                }
            }
        }
        fl(i,b,d+1)
        {
            if(s[a][i]=='#')
            {
                ans+=dpc[i][c]-dpc[i][a];
            }
            else
            {
                int x = dp2[i][a];
                if(x==-1||x>c)
                {
                    int x = dpc[i][a]+1;
                    int y = dpc[i][c]+1;
                    ans+=y-x+1-1;
                }
                else
                {
                    int x = dp2[i][a];
                    ans+=x-a-1;
                    ans+=dpc[i][c]-dpc[i][x];
                }
            }
        }
        cout << ans << "\n";      
    }
    return 0;
}
