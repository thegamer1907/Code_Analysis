#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pii pair<ll,ll>
#define piii pair<int,pair<int,int>>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define SIZE 10000002
#define MOD 1000000007
#define LD long double
#define bpc __builtin_popcount
using namespace std;

inline ll getnum()
{
    char c = getchar();
    ll num,sign=1;
    for(;c<'0'||c>'9';c=getchar())if(c=='-')sign=-1;
    for(num=0;c>='0'&&c<='9';)
    {
        c-='0';
        num = num*10+c;
        c=getchar();
    }
    return num*sign;
}

char S[1000004];
int Z[1000004];
int X[1000004];

int main()
{
    scanf("%s",S+1);
    int n=strlen(S+1);

    for(int i=2,l=1,r=1;i<=n;i++)
    {
        if(i>r)
        {
            l=i,r=i;
            int c=1;
            while(S[c]==S[r])c++,r++;
            r--;
            Z[i]=c-1;
        }
        else
        {
            int k=i-l+1;
            if(Z[k]<r-i+1)Z[i]=Z[k];
            else
            {
                l=i;
                ll c=1+r-i;
                while(S[c]==S[r])c++,r++;
                r--;
                Z[i]=c-1;
            }
        }
    }

    int ans=-1;
    for(int i=1;i<=n;i++)X[Z[i]]++;
    for(int i=n;i>=1;i--)X[i]+=X[i+1];
    for(int i=n;i>=1;i--)if(Z[i]+i==n+1)if(X[Z[i]]>1)ans=Z[i];
    
    if(ans==-1)cout<<"Just a legend\n";
    else cout<<(S+n-ans+1)<<"\n";
}