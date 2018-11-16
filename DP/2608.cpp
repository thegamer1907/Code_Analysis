 #include <bits/stdc++.h>

using namespace std;

int n, v[100005], nr, maxim;

int main()
{
    cin>>n;
    for (int i=1; i<=n; i++)
        cin>>v[i];
    nr=1;
    for (int i=2; i<=n; i++)
    {
        if (v[i-1]<v[i])
        {
            nr++;
        }
        else
        {
            if (nr>maxim)
                maxim=nr;
            nr=1;
        }
    }
    if (nr>maxim)
        maxim=nr;
    cout<<maxim;
    return 0;
}
