#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>   pii;
typedef vector< pii>      vii;
typedef vector<int>     vi;
typedef vector< vi >    vvi;
typedef long long int   LL;
#define pb push_back
#define mp make_pair
#define scan(n) scanf("%d",&n)
#define print(n) printf("%d\n",n)
#define longscan(n) scanf("%lld",&n)
#define longprint(n) printf("%lld\n",n)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
/*void sieve(int n)
  {
          for(int i=2;i*i<=100000;i++) for(int j=2*i;j<=100000;j+=i) if(!sie[j]) sie[j]=1;
          }*/
int main()
{
    int n,t;
    cin >> n >> t;
    int a[n+9];
    a[0] = 0;
    for(int j =1;j<n;j++)
    {
        cin >> a[j];
    }
    int idx = 1, flag = 0, id = 1;
    while(id  <= t)
    {
        idx = id + a[id];
        if(idx == t)
        {
            flag = 1;
            break;
        }
        id = idx;
    }
    if(flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;

}
