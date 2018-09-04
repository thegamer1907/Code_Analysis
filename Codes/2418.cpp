#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int n;
char S[10000001];
int A[10000001];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    while(n--)
    {
        int num;
        cin>>num;
        ++A[num];
    }
    for(int i = 2; i < 10000001; ++i)
    {
        if(!S[i])
        {
            for(int j = i+i; j < 10000001; j += i)
            {
                A[i] += A[j];
                S[j] = 1;
            }
        }
        else
            A[i] = 0;
        A[i] += A[i-1];
    }
    cin>>n;
    while(n--)
    {
        int l, r;
        cin>>l>>r;
        l = min(l, 10000000);
        r = min(r, 10000000);
        cout<<A[r]-A[l-1]<<'\n';
    }
    return 0;
}
