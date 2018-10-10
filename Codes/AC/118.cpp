#define push_back pb
#define make_pair mk
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<cmath>
#include<map>
#include<algorithm>
#include<string>
#include<string.h>
#include<set>
#include<queue>
#include<bitset>
#include<stack>
#include<functional>
using std::pair;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> PII;
typedef pair<double,int>PDI;
const double PI=acos(-1);
const int maxn=1e5+10;
const int maxm=5e4+10;
const int INF = 0x3f3f3f3f;
using namespace std;
int main()
{
    int n,x[maxn],q,m;
    cin>>n;
    for(int i=0;i<n;i++) cin>>x[i];
    cin>>q;
    sort(x,x+n);
    while(q--)
    {
        cin>>m;
        int l=0,r=n-1;
        int mid;
        mid=upper_bound(x,x+n,m)-x;
        cout<<mid<<endl;
    }
}
