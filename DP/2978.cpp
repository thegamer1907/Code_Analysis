#include <bits/stdc++.h>
using namespace std;

#define MP make_pair
#define PB push_back
#define FOR(init,num,inc) for(int i=init; i<num;i=i+inc)
#define N "\n"
#define VII vector<int> :: iterator
#define VILLI   vector<long long int> :: iterator
#define my_input(n) for(int i=0,a;i<n;i++) {cin>>a; v.PB(a);}
#define sz size()
#define fst first
#define snd second
#define FV 100005
#define SX 1000005
#define oo 1000000000000000005LL
#define M 1000000007;
#define scint(a) scanf("%d", &a)
#define ll long long
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);

typedef int I;
typedef long long int llint;
typedef vector<int> VI;
typedef vector<long long  int > VLLI;
typedef vector<string> VS;
typedef set<int> SI;
typedef set<long long int> SLLI;
typedef set<string> SS;


llint ar[FV];
string s[FV][2];
llint dp[FV][2];
int n;

bool check(int i, int j, int ii, int jj)
{
    if(s[i][j]>s[ii][jj]) return 1;
    else if(s[i][j].length()==s[ii][jj].length() && s[ii][jj]<=s[i][j]) return 1;
    else return 0;
}


void init()
{
    for(int i=0; i<FV-2; i++)
    {
        dp[i][0]=oo;
        dp[i][1]=oo;
    }
}



int main()
{
    init();
    cin>>n;
    for(int i=0; i< n  ; i++)
    {
        scanf("%I64d", &ar[i]);
    }
    for(int i=0; i< n ; i++)
    {
        cin>>s[i][0];
        s[i][1]=s[i][0];
        reverse(s[i][1].begin(),s[i][1].end() );
    }
    dp[0][1]=ar[0];
    dp[0][0]=0;
    for(int i=1; i< n; i++)
    {
        for(int j=0; j< 2; j++)
        {
            if(check(i,0, i-1, j) && dp[i-1][j]<oo )
            {
           //     cout<<i<<"  0  "<<j<<endl;
                dp[i][0]=min(dp[i][0],dp[i-1][j]);

            }
        }
        for(int j=0; j< 2; j++)
        {
            if(check(i,1, i-1, j) && dp[i-1][j]<oo)
            {
         //       cout<<i<<"  1  "<<j<<endl;
                dp[i][1]=min(dp[i][1],dp[i-1][j]+ar[i]);
            }
        }

    }
//    for(int i=0; i< n ; i++)
//    {
//        for(int j=0; j<2; j++) printf("%I64d ", dp[i][j]);
//        cout<<endl;
//    }
    llint res=min(dp[n-1][1], dp[n-1][0]);
    if(res>=oo) cout<<"-1";
    else cout<<res;
}
