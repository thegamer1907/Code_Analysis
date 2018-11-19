#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<queue>
#include<map>
#define intt long long
using namespace std;
const int MX=3e5+10;
int n,k,b[MX];
string a[MX];
struct code
{
    int x,y;
};
bool comp(int a , int b)
{
    return a<b;
}
bool is_pal(int a , int b)
{
     return a%10==(b/10) and a/10==b%10;
}
int gcd(int a , int b)
{
    while(b)
    {
        a%=b;
        swap(a,b);
    }
    return a;
}
int ansa,ansb;
main()
{
    string p;
    cin>>p>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][1]==p[0] and a[j][0]==p[1])
            {
                cout<<"YES";
                return 0;
            }
            if(a[i]==p)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
}
/*
ab
1
ab

*/
