#include<bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef unsigned long long uLL;
typedef long double ldb;
typedef pair<int,int> pii;

int A[100000];
int n;
int l = 0;

bool f(LL add)
{
    return add/n+bool(add%n)<=l-A[n-1]+add;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(int i = 0; i < n; ++i)
        cin>>A[i];
    sort(A, A+n);
    int i = 0;
    while(l<A[n-1])
    {
        int t = min(A[n-1]-A[i], A[n-1]-l);
        if(t == 0)
            break;
        A[i++] += t;
        l += t;
    }
    int left = -1, right = 2e9;
    while(left+1<right)
    {
        int m = left/2+right/2+(left%2+right%2)/2;
        if(f(m))
            right = m;
        else
            left = m;
    }
    cout<<l+right<<endl;
    return 0;
}
