#pragma comment(linker, "/STACK:102400000,102400000")
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cctype>
#include <map>
#include <set>
#include <queue>
#include <bitset>
#include <string>
#include <complex>
#define ll __int64
#define mod 1000000007
using namespace std;
int n;
vector<int> ve;
int  main()
{
    ve.clear();
    int sum=0;
    int a=0;
    int q;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        sum+=a;
        ve.push_back(sum);
    }
    scanf("%d",&q);
    for(int i=1;i<=q;i++){
        scanf("%d",&a);
        int pos=lower_bound(ve.begin(),ve.end(),a)-ve.begin();
        printf("%d\n",pos+1);
    }
    return 0;
}
