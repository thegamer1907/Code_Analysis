#define _CRT_SBCURE_MO_DEPRECATE
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<cmath>
#include<algorithm>
#include<string>
#include<string.h>
#include<set>
#include<queue>
#include<stack>
#include<functional>
using namespace std;
typedef long long ll;
const int maxn = 100 + 10;
ll fun(ll n)
{
    ll res=0;
    ll t=n;
    while(t!=0)
    {
        res+=t%10;
        t/=10;

    }
    return res;

}
int main()
{
    ll a[10005];
    int k=0;
    int n;
    cin>>n;
    for(ll i=19;;i++)
    {
        if(fun(i)==10)
        {
            k++;
            if(k==n)
            {
                cout<<i<<endl;
                return 0;
            }
        }
    }

}
