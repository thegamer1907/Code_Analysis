#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef pair<int,int> pii;
typedef vector<int> vi;
//IN
#define si(n) scanf("%d",&n)
#define sc(c) scanf("%d",&c)
#define sll(lli) scanf("%lld",&ll)
#define ss(n) scanf("%s",n)
//freopen("in.in", "r", stdin);
//freopen("out.out", "w", stdout);
//OTHERS
#define loop(i,a,b) for(int i=a;i<b;i++)
#define sortArr(arr,n) sort(arr,arr+n);
#define sort_all(v) v.begin(),v.end()
#define MAX_INT (int)1e9
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
#define mp make_pair
#define pb push_back
#define pf push_front
#define allDS(v) (v.begin(),v.end())
#define allArr(arr,n) (arr,arr+n)
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define mem(arr,val) memset(arr,val,sizeof(arr));
//USEFUL FUNCTIONS
bool sortbysec(const pair<int,int> &a,
               const pair<int,int> &b)
{
    return (a.second < b.second);
}
int gcd(int a,int b)
{
    if(a==0)return b;
    if(b==0)return a;
    if(a==1||b==1)return 1;
    if(a==b)return a;
    if(a>b)return gcd(b,a%b);
    else return gcd(a,b%a);
}
#define sortbysec(v) sort(v.begin(),v.end(),sortbysec);
#define bitcount  __builtin_popcount
//OUT
#define printArr(i,a,n,arr) for(int i=a;i<n;i++)printf("%d ",arr[i]);
bool flag = false;
int main()
{
    int i,n,ans;
    si(n);si(ans);
    int a[100000];
    a[0] = 0;
    for(i=1;i<n;i++)
        si(a[i]);
    i = 1;
    while(i<ans)
        i+=a[i];
    (i==ans) ? printf("YES") : printf("NO");
    return 0;
}
