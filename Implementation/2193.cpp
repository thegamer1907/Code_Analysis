#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    int n,x=0,y=0,z=0,i=0,p,q,r;
    cin>>n;
    while (i < n)
    {
        cin>>p>>q>>r;
        x += p;
        y += q;
        z += r;
        i += 1;
    }
    if ((x == 0) && (y == 0) && (z == 0)){
        cout<<"YES\n";
        }
    else
    {
        cout<<"NO\n";
    }
}
