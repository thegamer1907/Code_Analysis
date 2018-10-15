#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[500000];
int B[500000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    sort(A, A+n);
    int cur = 0;
    int ans = n;
    for(int i = (n+1)/2; i < n; ++i)
    {
        if(A[cur]*2 <= A[i])
        {
            --ans;
            ++cur;
            A[i] = 0;
        }
    }
    cout<<ans<<endl;
    return 0;
}
