#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int n,k;
    cin>>n>>k;
    vector<int>A(n),B(k);

    for(auto&x : A)cin>>x;
    for(auto&x : B)cin>>x;
    sort(B.rbegin(),B.rend());
    for(int i=0, j=0; i<A.size(); i++)
        if(A[i]==0)A[i]=B[j++];

    vector<int>S = A;
    sort(S.begin(),S.end());

    cout<<(S!=A ? "Yes\n" : "No\n");
}
