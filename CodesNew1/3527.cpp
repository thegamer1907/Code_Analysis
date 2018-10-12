#include <bits/stdc++.h>
#include <set>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;
#define ll long long

int main()
{
    int n,m,a[112];
    cin >> n >> m;
    for(int i=0; i < n; i++)
        cin >> a[i];

    int maxx = *max_element(a,a+n)+m;
    int pos=-1;
    for(int it=0; it<m;it++)
    {
        for(int i=0;i<n;i++)
        {
            if(pos==-1 || a[i] < a[pos])
                pos=i;
        }
        assert(pos != -1);
        a[pos]++;
    }
    int minn = *max_element(a,a+n);
    cout << minn << ' ' << maxx << endl;
    return 0;

}
