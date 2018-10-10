#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
#include<set>
#include<queue>
#include<limits.h>
#include<string.h>
#include<map>
#include<list>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long LL;
typedef long double lb;

#define inf int(0x3f3f3f3f)
#define mod ll(1e9+7)
#define eps double(1e-7)
#define pi acos(-1.0)
#define lson  root << 1
#define rson  root << 1 | 1



int n;

vector<int> v;

int cal(int num)
{
    int sum=0;
    while(num)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    v.clear();
    for(int i=1;;i++)
    {
        if(cal(i)==10)
            v.push_back(i);
        if(v.size()==n)
        {
            cout<<v[n-1]<<endl;
            return 0;
        }
    }
}

