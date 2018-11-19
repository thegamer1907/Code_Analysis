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

    string need;
    cin >> need;

    int n;
    cin >> n;

    vector<string> v;
    bool ok = false;
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        if(s==need)
            ok = true;
        v.push_back(s);
    }

    int last,first;
    last = first = 0;
    for(int i=0; i<v.size(); i++)
    {
        string s = v[i];
        if(need[0]==s[1])
            first = 1;
        if(need[1]==s[0])
            last = 1;
    }

    if(last && first)
        ok = true;

    if(ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
