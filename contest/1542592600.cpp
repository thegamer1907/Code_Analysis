#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <stack>
#define ll long long
const int N=2e5+10;
const int inf=0x3f3f3f3f;
const double eps=1e-7;
const int mod=1e9+7;
const double pi=acos(-1.0);
using namespace std;

string a,b;
int main()
{
    cin>>a;
    char c=a[0],d=a[1];
    int n;  cin>>n;
    int ans1=0,ans2=0;
    for(int i=1;i<=n;i++)
    {
        cin>>b;
        if(a==b) {puts("YES"); return 0;}
        if(b[0]==d) ans2++;
        if(b[1]==c) ans1++;
    }
    if(ans1&&ans2) puts("YES"); else puts("NO");
return 0;
}
