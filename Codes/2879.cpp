#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pp pair<long long,long long>
#define f first
#define s second
#define pb push_back
ll dp[1000010];
int main()
{
    ll t,n,i,j,k,l,m;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin>>str;
    n=str.length();
    j=0;
    ll ans=0;
    set <ll> st;
    for (i=1;i<n;)
    {
        if (str[i]==str[j])
        {
            j++;
            dp[i]=j;
            i++;
        }
        else
        {
            if (j)
                j=dp[j-1];
            else
                dp[i]=j,i++;
        }
    }
    for (i=0;i<n-1;i++)
        st.insert(dp[i]);
    k=dp[n-1];
    while (k!=0)
    {
        if (st.find(k)!=st.end())
            break;
        k=dp[k-1];
    }
    if (!k)
    {
        cout<<"Just a legend\n";
        return 0;
    }
    for (i=0;i<k;i++)
        cout<<str[i];
    cout<<'\n';
    return 0;
}
