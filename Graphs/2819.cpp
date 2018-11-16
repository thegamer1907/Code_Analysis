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

int A[100004];
int yes[100004];
set<int> Set[100004];

int main()
{
    int n=getnum(),m=getnum();

    for(int i=1;i<=n;i++)A[i]=getnum(),yes[A[i]]=1;

    for(int i=1;i<=m;i++)
    {
        int x=getnum(),y=getnum();
        Set[A[x]].insert(A[y]);
        Set[A[y]].insert(A[x]);
    }

    pii mx={0,-10000000};
    for(int i=1;i<=100000;i++)
    {
        Set[i].erase(i);
        if(yes[i])mx=max(mx,{Set[i].size(),-i});
    }

    cout<<-mx.ss<<endl;
}