#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<lli,lli> plli;
typedef vector<int> vi;
typedef vector<lli> vlli;
double EPS = 1e-9;
//IN
#define si(n) scanf("%d",&n)
#define sc(c) scanf("%d",&c)
#define sll(n) scanf("%I64d",&n)
#define ss(n) scanf("%s",n)
//freopen("in.in", "r", stdin);
//freopen("out.out", "w", stdout);
//OTHERS
#define lp(i,a,b) for(int i=a;i<b;i++)
#define sortArr(arr,n) sort(arr,arr+n);
#define sort_all(v) v.begin(),v.end()
#define MAX_INT (int)1e9
const double PI=3.14159265358979323846264338327950288419716939937510582097494459230;
#define mp make_pair
#define pb push_back
#define pf push_front
#define fir first
#define sec second
#define allDS(v) (v.begin(),v.end())
#define allArr(arr,n) (arr,arr+n)
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define mem(arr,val) memset(arr,val,sizeof(arr))
//USEFUL FUNCTIONS
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
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
int main()
{
    int ans=0,k=1,s=0,m=0,n,free;
    si(n);
    si(free);
    int arr[n+1];
    arr[0] = 0;
    lp(i,1,n+1)
    {
        cin >> arr[i];
        s+=arr[i];
        ans++;
        if(s>free)
        {
            s-=arr[k];
            k++;
            ans--;
        }
    }
    cout << ans;
    return 0;
}
