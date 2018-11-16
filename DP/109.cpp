#include <bits/stdc++.h>

using namespace std;

typedef vector <int> vi;
#define pb push_back

int diff(int x, int y)
{
    if(x>y)
        return x-y;
    else if(y>x)
        return y-x;
    else
        return 0;
}

int main()
{
    int n, m, d, res=0;
    cin>>n;
    vi a;
    for(int i=0; i<n; i++)
    {
        int j;
        cin>>j;
        a.pb(j);
    }

    cin>>m;
    vi b;
    for(int i=0; i<m; i++)
    {
        int j;
        cin>>j;
        b.pb(j);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(int i=0, j=0; i<n; j++)
    {
        d=diff(a[i], b[j]);
        if(d==0 || d==1){
            b[j]=-1;
            res++;
            i++;
            j=-1;
        }
        if(j==m-1){
            j=-1;
            i++;
        }
    }
    cout<<res<<endl;
    return 0;
}
