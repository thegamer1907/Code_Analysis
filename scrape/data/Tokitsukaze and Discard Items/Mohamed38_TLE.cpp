#include <bits/stdc++.h>

using namespace std;
int main(void)
{
    long long int n,m,k;
    cin >> n >> m >> k;
    long long int x[m];
    for(int i=0; i<m; i++)
    {
        cin >> x[i];

    }
    long long int sp = k,d=0,sum=0,i=0,a=0,b=0,c=0,v=0;
    //vector<int> v;
    //v.push_back(0);
    while(i<m)
    {
        a=0;b=0;
        while(x[i] <= sp + v && i<m )
        {
            d++;
            i++;
            a=1;
        }
        v=d;
        while(x[i] <= sp + v && i<m)
        {
            d++;
            i++;
            b=1;
        }
        sp+=k;
        c += a+b;


    }
    cout << c;
}