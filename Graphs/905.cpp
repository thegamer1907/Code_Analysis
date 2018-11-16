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
#define ms(a,b) memset(a,b,sizeof(a))
#define FR(i,k,n) for(int i=k;i<=n;i++)
#define fr(i,k,n) for(int i=k;i>=n;i--)
#define mod 1000000007
typedef long long ll;
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[500010]={0};
    FR(i,1,n-1)
    cin>>a[i];
    int i=1;
    while(i<m) i+=a[i];
    if(i==m) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}