#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<int> prefix_function (string Z)
{
    int n = (int) Z.length();
    vector<int> F (n);
     F[0]=0;
    for (int i=1; i<n; ++i) {
        int j = F[i-1];
        while (j > 0 && Z[i] != Z[j])
            j = F[j-1];
        if (Z[i] == Z[j])  ++j;
        F[i] = j;
    }
    return F;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    string a,b;cin>>a;
    b=a;reverse(b.begin(), b.end());
    vector<int> aa,bb;
    aa=prefix_function(a);
    bb=prefix_function(b);
    int pre=0,t;
    for(int i=0;i<a.length();i++)
    {
        t=a.length()-1-(i-aa[i]+1);
        if(aa[i]==bb[t] && pre<aa[i])
            pre=aa[i];

    }
    if(pre)
    {
        for(int i=0;i<pre;i++)
            cout<<a[i];
    }
    else
        cout<<"Just a legend";

}
