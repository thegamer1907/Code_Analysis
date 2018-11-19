#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j;
    cin>>n>>k;
    int c[16] = {0};
    for(i=0;i<n;i++)
    {
        int v = 0;
        for(j=0;j<k;j++)
        {
            int r;
            cin>>r;
            if(r) v += (1<<(j));
        }
        c[v] = 1;
    }
    for(i=0;i<16;i++){
        for(j=0;j<16;j++){
            if(c[i] && c[j] && !(i&j))
            {
                cout<<"YES";
                return 0;
            }   
        }
    }
    cout<<"NO";   
}