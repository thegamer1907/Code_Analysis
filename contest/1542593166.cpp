#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <queue>
#include <deque>
#include <list>
#include <utility>
#include <iomanip>
#include <cstring>
#include <sstream>
#include <climits>
#include<stdio.h>
using namespace std;
#define MuhammedAly   ios_base::sync_with_stdio(0);cin.tie(0);
#define val v.begin(),v.end()
#define sal s.begin(),s.end()
#define pb push_back
#define pf push_front
#define mp make_pair
#define bp __builtin_popcount
#define setall  memset
#define mod 1000000007
#define PI 3.1415926536
#define LLMX 1e18
#define LLMN -1e18
#define NotinRange i<0||i>=n||j<0||j>=m
typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

int main()
{
    MuhammedAly
    string s;
    int n;
    cin>>s>>n;
    string bark[n];
    bool a=0,b=0;
    for(int i=0; i<n; i++)
    {
        cin>>bark[i];
    }
    for(int i=0; i<n; i++)
    {
        if(bark[i][0]==s[1])
        {
            b=1;
        }
        if(bark[i][1]==s[0])
        {
            a=1;
        }
        if(bark[i][0]==s[0]&&bark[i][1]==s[1])
        {
            a=1;
            b=1;
        }
        if(a&&b)return cout<<"YES",0;
        }
        cout<<"NO";
    return 0;
}
