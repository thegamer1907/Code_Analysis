#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <Math.h>
#include <bitset>
#include <utility>
#include <set>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define pf push_front
#define pb push_back
#define se second
#define si size()
#define sc scanf
#define pr printf
#define sc2(a,b) scanf("%d %d",&a,&b)
#define sc3(a,b) scanf("%d %d %d",&a,&b,&c)
#define fi first
#define er erase
#define be begin
#define ss size
#define Int __int64
#define INF 100000000000000008
#define MOD 1000000007
#define MN 500500
#define eps 0.0000000000000000018
#define mem(a) memset(a,0,sizeof(a))
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define forn(i, n) for(int i = 0; i < n; i++)
typedef long long ll;

using namespace std;

const ll maxn = 1e5 + 100;
const ll maxk = 6;

ll n, k, index1 = -1, sub0011, sub0101, sub1001, sub0110, sub1010, sub1100;
int s[maxn][maxk] , rowsum[maxn]={};

int main()
{
    cin >> n >> k;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<k; j++)
        {
            cin >> s[i][j];
            rowsum[i] += s[i][j];
        }
        if(rowsum[i] == 0)
            return cout<<"YES", 0;
        if(rowsum[i] == 1)
        {
            for(ll j=0; j<k; j++)
                if(s[i][j] == 1)
                    index1 = j;
        }
    }
    if(index1 >= 0)
    {
        for(ll i=0; i<n; i++)
            if(s[i][index1] == 0)
                return cout << "YES", 0;
        return cout << "NO", 0;
    }
    if(k <= 3)
        return cout << "NO", 0;

    for(ll i=0; i<n; i++)
    {
        if(rowsum[i] == 2)
        {
            if(s[i][0]==0 && s[i][1]==0 && s[i][2]==1 && s[i][3]==1)
                sub0011++;
            if(s[i][0]==0 && s[i][1]==1 && s[i][2]==0 && s[i][3]==1)
                sub0101++;
            if(s[i][0]==1 && s[i][1]==0 && s[i][2]==0 && s[i][3]==1)
                sub1001++;
            if(s[i][0]==0 && s[i][1]==1 && s[i][2]==1 && s[i][3]==0)
                sub0110++;
            if(s[i][0]==1 && s[i][1]==0 && s[i][2]==1 && s[i][3]==0)
                sub1010++;
            if(s[i][0]==1 && s[i][1]==1 && s[i][2]==0 && s[i][3]==0)
                sub1100++;
        }
    }
    if(sub0011 > 0 && sub1100 > 0)
        return cout << "YES", 0;
    if(sub0101 > 0 && sub1010 > 0)
        return cout << "YES", 0;
    if(sub1001 > 0 && sub0110 > 0)
        return cout << "YES", 0;

    return cout << "NO", 0;
}

