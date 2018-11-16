#pragma GCC optimize("O3")

#include<bits/stdc++.h>

#define    pi        3.141592653589793
#define    spc       " "
#define    el        "\n"
#define    die       return 0
#define    ios       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define    ll        long long
#define    ld        long double
#define    pb        push_back
#define    pf        push_front
#define    bitcount  __builtin_popcount
#define    gcd       __gcd


using namespace std;

int x ,y, z, sx, sy, sz;

int main()
{
    int n, i;
    cin>>n;

    for(i = 0 ; i< n; i++)
    {
        cin>>x>>y>>z;
        sx+=x, sy+=y, sz+=z;
    }

    if(sx||sy||sz)
        cout<<"NO";
    else
        cout<<"YES";
    die;
}


