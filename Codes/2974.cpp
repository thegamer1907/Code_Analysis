#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

char S[1000002];
int T[1000001];
bool R[1000001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>(S+1);
    int n = strlen(S+1);
    int q = 0;
    for(int i = 2; i <= n; ++i)
    {
        while(q>0 && S[q+1] != S[i])
            q = T[q];
        if(S[q+1] == S[i])
            ++q;
        T[i] = q;
    }
    q = n;
    do
    {
        q = T[q];
        R[q] = true;
    }
    while(q);
    for(int i = 2; i < n; ++i)
        if(R[T[i]] && T[i] > T[q])
            q = i;
    for(int i = 1; i <= T[q]; ++i)
        cout<<S[i];
    if(!q)
        cout<<"Just a legend";
    cout<<endl;
    return 0;
}
