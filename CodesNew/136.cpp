#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n,l,x,i,d,m;

    cin >> n >> l;

    vector < long int > v;

    for(i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    m = 2*v[0];
    for(i = 0; i < n; i++)
    {
        if(i != (n-1)) d = abs(v[i+1] - v[i]);
        if(i == (n-1)) d = 2 * abs(l - v[i]);
        if(m < d) m = d;
    }
    printf("%0.10lf\n", (double)m/2.0);

    return 0;
}
