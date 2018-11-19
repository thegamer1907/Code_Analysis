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

int kase=1,n,k;

set<string> s;
vector<string> v;

bool check(string a,string b)
{
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]==b[i] && a[i]=='1')
            return false;
    }
    return true;
}

int main()
{
//    freopen (".in", "r", stdin);
//    freopen (".out", "w", stdout);

    sf2(n,k);

    for(int i=0; i<n; i++)
    {
        string ss = "";
        for(int j=0; j<k; j++)
        {
            char ch;
            cin >> ch;
            ss += ch;
        }
        s.insert(ss);
    }

    copy(s.begin(), s.end(), std::back_inserter(v));

    sort(v.begin(),v.end());

    if(v[0]=="0" || v[0]=="00" || v[0]=="000" || v[0]=="0000")
        cout << "YES" << endl;
    else
    {
        for(int i=0; i<v.size(); i++)
        {
            for(int j=i+1; j<v.size(); j++)
            {
                string one = v[i];
                string two = v[j];
                if(check(one,two)==true)
                {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
        cout << "NO" << endl;
    }

    return 0;
}
