#include <bits/stdc++.h>
#define MAX 1000001
#define ll long long

using namespace std;

ifstream f("date.in");

ll n, v[MAX], k;

int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>v[i];
    sort(v, v+n);
    for(int i=0; i<n; i++)
        if(v[i]>=v[k]*2)
            k++;
    cout<<n-min(n/2, k);
}
