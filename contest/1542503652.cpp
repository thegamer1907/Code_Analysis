
#include<bits/stdc++.h>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=a;i>=b;i--)
#define loopm(i,a,b,step) for(int i=a;i<b;i+=step)
#define loopbm(i,a,b,step) for(int i=a;i>=b;i-=step)
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define init(arr,val) memset(arr,val,sizeof(arr))
#define INF 1000000007
#define MOD 1000000007
#define BINF 1000000000000000001
#define int long long int
#define double long double

using namespace std;

#undef int
int main()
{
#define int long long int
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    //cin>>t;
    while(t--){
    string s;
    cin>>s;
    int n;
    cin>>n;
    string a[n];
    loop(i,0,n) cin>>a[i];
    bool flag=false;
    loop(i,0,n)
    {
        loop(j,0,n)
        {
            if((a[i][1]==s[0] and a[j][0]==s[1]) or (a[i][0]==s[1] and a[i][1]==s[0]))
            {
                flag=true;
            }
        }
        if(a[i]==s) flag=true;
    }
    if(flag)cout<<"YES";
    else cout<<"NO";
    }
    return 0;
}