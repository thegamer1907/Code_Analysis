#include<bits/stdc++.h>
using namespace std;
#define fore(i, l, r) for(li i = (l); i < (r); ++i)
#define forn(i, n) fore(i, 0, n)
#define li long long
int main()
{
    li n,k;
    cin>>n>>k;
    li a[51];
    a[0]=1;
    fore(i,1,n+1)
        a[i]=a[i-1]*2;
    fore(i,0,n){
        if(k%a[i]==0&&(k/a[i])&1)
            {
                cout<<i+1;
                break;
            }
    }
}