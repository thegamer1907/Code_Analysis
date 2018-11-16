#include<bits/stdc++.h>
using namespace std;

#define ll long long


int main()
{
    ll i,j,k=0,l,n,m,a,b,c,d;
    cin>>m>>n;
    string st;
    cin>>st;
    while(n--)
    {
        for(i=0;i<m-1;i++){
            if(st[i]=='B' && st[i+1]=='G'){
                swap(st[i],st[i+1]);
                i++;
            }
        }
    }
    cout<<st<<endl;
    return 0;
}


