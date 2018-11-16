#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <time.h>
#include <math.h>
#include <ctime>
#include <map>
#include <queue>
#include <stack>
#include <stdlib.h>
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define FOR(i,n) for(int i=1;i<=n;i++)
#define FO(i,n) for(int i=n;i;i--)
#define For(i,n) for(int i=0;i<n;i++)
#define fo(i,n) for(int i=n-1;i>=0;i--)
typedef long long ll;
using namespace std;
int main()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    FOR(i,k)
    For(j,s.size())
    if(s[j]=='B' and s[j+1]=='G')
        swap(s[j],s[j+1]),j++;
    cout<<s<<endl;
}