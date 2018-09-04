#include<bits/stdc++.h>
using namespace std;
long long i,j,n,m,k,l,r,c,p;
int main()
{
    std::cin.sync_with_stdio(false);
    cin >> n >> m >> k;
    l=1;
    r=n*m+1;
    while (l<r)
    {
        c=l+(r-l)/2;
        p=0;
        i=1;
        while (i<=min(c,n))
        {
            p+=min(m,(c-1)/i);
            i++;
        }
        if (p<k)
        {
            l=c+1;
        }
        else
        {
            r=c;
        }
    }
    cout << l-1;
    return 0;
}
