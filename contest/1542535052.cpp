#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <bitset>
#include <set>
#include <list>
#include <deque>
#include <map>
#include <queue>
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const double pi=acos(-1.0);
const double eps=1e-6;
const int INF=1000000000;
const int maxn=110;
const int maxm=10010;
string luna;
string arr[228];
int n;
int main(int argc, char const *argv[])
{
    cin>>luna;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==luna)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((arr[i]+arr[j]).find(luna)!=-1)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    //system("pause");
    return 0;
}