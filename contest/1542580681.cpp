/*
ID: protikn2
PROG: test
LANG: C++14
*/

//#include <bits/stdc++.h>

#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<deque>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include<functional>
#include<climits>
#include<cassert>
#include<cstdlib>
#include<ctime>
#include<utility>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

//  scan & print

#define sf scanf
#define pf printf
#define sf1(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d %d",&a,&b)
#define sf3(a,b,c) scanf("%d %d %d",&a,&b,&c);
#define sfl1(a) scanf("%lld",&a)
#define sfl2(a,b) scanf("%lld %lld",&a,&b)
#define sfl3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c);

#define pro printf("1\n")
#define pcase printf("Case %d: ",kase++)

// constants

#define INF 9999999

#define ll long long int
#define pii pair<int,int>

//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;

using namespace std;

int kase=1;

int main()
{
//    freopen (".in", "r", stdin);
//    freopen (".out", "w", stdout);

    int h,m,s,t1,t2;
    cin >> h >> m >> s >> t1 >> t2;

    t1 *= 5;
    t2 *= 5;
     h *= 5;
     h %= 60;
    t1 %= 60;
    t2 %= 60;

    int cnt = 0;
    for(int i=t1; ; i++)
    {
        if(i>=60)
            i %= 60;
        if(i<0)
            i += 60;
        if(i==t2)
            break;
        if(i==h)
            cnt++;
        if(i==m)
            cnt++;
        if(i==s)
            cnt++;
    }

    if(cnt==3 || cnt==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
