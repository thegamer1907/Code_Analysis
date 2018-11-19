#include <bits/stdc++.h>


#define gc getchar
#define pc putchar

using namespace std;

/*#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
*/

/*
        two functions for policy based data structure. it is

                find_by_order() and order_of_key().

        The first returns an iterator to the k-th largest element (counting from zero),
        the second returns the number of items in a set that are strictly smaller than our item

*/

#define vi vector<int>
#define si set<int>
#define vs vector<string>
#define pii pair<int,int>
#define vpi vector<pii>
#define pri priority_queue<int>
#define rev_pri priority_queue<int,vector<int>,greater<int> >
#define mpi map<int,int>
#define i64 long long int
#define endl '\n'
#define pi acos(-1)
#define all(v) v.begin(),v.end()
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define For(i,n) for(int i=0;i<n;i++)
#define Rep(i,x,y) for(int i=x;i<=y;i++)
#define eps 1e-8
#define ff first
#define ss second
#define mem(a,b) memset(a,b,sizeof(a))
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define READ freopen("input.txt", "r", stdin)
#define WRITE freopen("output.txt","w", stdout)
#define sz size()
#define dbg(x) printf("yo is %d!\n",x)
#define dbg2(x,y) printf("yo is %d! and %d!\n",x,y)
#define foreach(i,c) for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define sqr(a) (a) * (a)
#define clr clear()
#define CASE(a) printf("Case %d: ",a)
#define sf(n) scanf("%d", &n)
#define sff(a,b) scanf("%d %d", &a, &b)
#define sfff(a,b,c) scanf("%d %d %d", &a, &b, &c)

//int dx[] = {0,1,0,-1};
//int dy[] = {1,0,-1,0};
//int dx[] = { -1, -1,  0, 1, 1, 1,  0, -1 };
//int dy[] = {  0, -1, -1, -1,  0, 1, 1, 1 };
//int dxK[] = { -2, -2, -1, 1, 2, 2, 1, -1 };
//int dyK[] = { -1, 1, 2, 2, 1, -1, -2, -2 };

//functions

//i64 gcd(i64 a,i64 b){if(!b)return a;return gcd(b,a%b);}

//inline void fastRead(i64 *a){register char c=0;while(c<33)c=gc();*a=0;while(c>33){*a=*a*10+c-'0';c=gc();}}

//inline void fastWrite(int a){char snum[20];int i=0;do{snum[i++]=a%10+48;a=a/10;}while(a!=0);i=i-1;while(i>=0)pc(snum[i--]);pc('\n');}

//i64 bigmod(i64 num,i64 n){if(!n)return 1;i64 x=(bigmod(num,n/2)*bigmod(num,n/2))%mod;if(n%2)x=(x*num)%mod;return x;}

//i64 modinverse(i64 num){return bigmod(num,mod-2);}

//void combination(int pos,int last){if(pos==k+1){for(int i=1;i<=k;i++)cout << tem[i];cout << endl;return;}
//for(int i=last+1;i<=n-k+pos;i++){tem[pos] = num[i-1];combination(pos+1,i);}}
//i64 power(i64 value, i64 base){i64 result = 1;For(i,base)result *= value;return result;}
//int Set(int N,int pos){return N = (1<<pos);}
//int reset(int N,int pos){return N &= (~(1<<pos));}
//bool check(int N,int pos){return (bool)(N & (1<<pos));}

//typedef tree< int, null_type, less < int >, rb_tree_tag, tree_order_statistics_node_update > Set;

#define inf 99999999999999999

int arr[100005],freq[100005];
int l,r,n,k;
i64 curr;
i64 dp[100005][25];
i64 p[100005][25];

i64 q(int x, int y)
{
    if(x>y) return inf;
    while(l > x) curr += freq[arr[l-1]], freq[arr[l-1]]++, l--;
    while(r < y) curr += freq[arr[r+1]], freq[arr[r+1]]++, r++;
    while(l < x) freq[arr[l]]--, curr -= freq[arr[l]], l++;
    while(r > y) freq[arr[r]]--, curr -= freq[arr[r]], r--;

    return curr;
}

/*
i64 f(int pos, int rem)
{
    if(pos==n+1)
        return 0;

    i64 &ret = dp[pos][rem];

    if(ret!=-1)
        return ret;

    ret = 99999999999999999;

    Rep(i,pos,n)
    {
        if(rem>0)
            ret = min(ret, q(pos,i) + f(i+1,rem-1));
    }
    return ret;

}
*/

void fill(int g, int l1, int l2, int p1, int p2)
{
    if(l1>l2)
        return;

    int lm = (l1+l2)/2;

    p[lm][g] = -1;
    dp[lm][g] = 999999999999999999;

    Rep(i,p1,p2)
    {
        i64 wgt = dp[i][g-1] + q(i+1,lm);
        if(dp[lm][g] > wgt)
        {
            dp[lm][g] = wgt;
            p[lm][g] = i;
        }
    }

    fill(g, l1, lm-1, p1, p[lm][g]);
    fill(g, lm+1, l2, p[lm][g], p2);
}

int main()
{
    cin >> n >> k;
    Rep(i,1,n)
        cin >> arr[i];

    l = 1, r = 0;

    Rep(i,1,n)
    {
        dp[i][1] = q(1,i);
        p[i][1] = 0;
    }


    Rep(i,2,k)
        fill(i,1,n,1,n);

    cout << dp[n][k] << endl;


    return 0;
}
