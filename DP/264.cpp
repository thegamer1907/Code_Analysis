#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,ans=0;
    cin >> n; vector <int> A(n,0); for (int i=0;i<n;i++) cin >> A[i];
    cin >> m; vector <int> B(m,0); for (int i=0;i<m;i++) cin >> B[i];
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int i=0,j=0;
    while (i<n && j<m)
    {
        if (A[i]==B[j] || A[i]==B[j]+1 || A[i]+1==B[j])
        {
            ans++; i++;j++;
        }
        else if (A[i]<B[j]) i++;
        else if (B[j]<A[i])j++;
    }
    cout << ans;
    return 0;
}
