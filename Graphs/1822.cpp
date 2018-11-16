#include <bits/stdc++.h>

using namespace std;

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
    int a[101], b[101];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    sort(a, a+n);
    sort(b, b+m);

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
