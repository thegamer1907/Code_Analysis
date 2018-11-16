#include <bits/stdc++.h>

using namespace std;

int n, m, F[100005], V[100005], SP[100005], q;

int main()
{
    cin>>n>>m;
    for (int i=1; i<=n; i++)
    {
        cin>>V[i];
    }
    for (int i=n; i>=1; i--)
    {
        SP[i]=SP[i+1];
        if (F[V[i]]==0)
        {
            F[V[i]]=1;
            SP[i]++;
        }
    }
    while (m--)
    {
        cin>>q;
        cout<<SP[q]<<endl;
    }
    return 0;
}
