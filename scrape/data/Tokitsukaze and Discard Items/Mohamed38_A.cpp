#include <bits/stdc++.h>

using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long int n,m,k;
    cin >> n >> m >> k;
    long long int x[m];
    for(int i=0; i<m; i++)
    {
        cin >> x[i];

    }
    long long int sp = k,d=0,sum=0,i=0,a=0,b=0,c=0,v=0;
    while(i<m)
    {
        a=0;
        b=0;
        while( i<m && x[i] <= sp + v )
        {
            d++;
            i++;
            a=1;
        }
        v=d;
        while( i<m && x[i] <= sp + v)
        {
            d++;
            i++;
            b=1;
        }
        v = d;
        if(i<m)
        {


            sp = ((x[i] - d)/k);
            if((x[i]-d) % k != 0)
                sp+= 1;
            sp *= k;
        }

        c += a+b;
    }
    cout << c;
}