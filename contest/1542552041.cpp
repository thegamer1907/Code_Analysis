#include<iostream>
#include<set>
#include<vector>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
//#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
typedef vector<int> vi;
typedef vector<long long> vll;
#define pb push_back
template<typename T>void read(T &x)
    {
        register T c = getchar(); x = 0; int t = 0;
        if (c == '-') t = 1, c = getchar();
        for (; (c < 48 || c > 57); c = getchar());
        for (; c > 47 && c < 58; c = getchar()) {
            x = (x << 1) + (x << 3) + c - 48;
        }
        if (t) x = -x;
    }
int main()
{
//ios_base::sync_with_stdio(false); cin.tie(NULL);
ll n,m;
read(n);
read(m);
bool arr[16]={0},value,ans=0;
for(int i=0;i<n;i++)
{
    int here=0;
    for(int j=0;j<m;j++)
    {
        cin>>value;
        here=2*here+value;
    }
    arr[here]=1;
}
if(arr[0])ans=1;
for(int i=0;i<(1<<m);i++)
{
    for(int j=i+1;j<(1<<m);j++)
    {
        if(!arr[i] || !arr[j])continue;
        if(!(i&j))ans=1;
    }
}
if(ans)cout<<"YES";
else cout<<"NO";


}
