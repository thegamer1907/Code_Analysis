#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <queue>
#include <map>
#define  pb push_back
#define  S second
#define  F first
#define ra ragham
#define ll long long
using namespace std;
typedef pair<ll,ll> pii ;
typedef pair<char,char> cii ;
//setprecision(8)
//ios_base::sync_with_stdio(false);

int A[16];

int main()
{
    int n,k;
    int w,c;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        c=0;
        for(int j=1;j<=k;j++)
        {
            c*=2;
            cin>>w;
            c+=w;
        }
        A[c]++;
    }
    for(int i=0;i<16;i++)
    {
        for(int j=0;j<16;j++)
        {
            if((i&j)==0 && A[j] && A[i])
            {
                cout<<"Yes";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
