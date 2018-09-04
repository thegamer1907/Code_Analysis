#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[200000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    LL ans = 0, left = 0, right = 0;
    int n;
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    int l = 0, r = n-1;
    while(l<=r)
    {
        if(left<=right)
            left += A[l++];
        else
            right += A[r--];
        if(left == right)
            ans = left;
    }
    cout<<ans<<endl;
    return 0;
}
