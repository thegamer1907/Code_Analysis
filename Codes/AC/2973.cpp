#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char S[1000002];
int Z[1000001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>S;
    int n = strlen(S);
    int l = 0, r = 0;
    Z[0] = 0;
    for(int i = 1; i < n; ++i)
    {
        if(r > i)
        {
            Z[i] = min(Z[i-l], r-i+1);
        }
        while(S[i+Z[i]] == S[Z[i]])
            ++Z[i];
        if(i+Z[i]>r)
        {
            l = i;
            r = i+Z[i]-1;
        }
    }
    int q = 0;
    for(int i = 1; i < n; ++i)
        q = max(q, min(n-i-1, Z[i]));
    for(int i = 2; i < n; ++i)
        if(Z[i] == n-i && Z[i]<=q)
        {
            q = Z[i];
            break;
        }
    if(!q || Z[n-q] != q)
        cout<<"Just a legend";
    else
    {
        l = 0;
        while(Z[l] != q)
            ++l;
        for(int i = 0; i < q; ++i)
            cout<<S[i+l];
    }
    cout<<endl;
    return 0;
}
