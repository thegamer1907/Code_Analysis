#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fori(it, x) for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n;
    vector <int> a;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        if(i==0)
            a.push_back(m);
        else
            a.push_back(m+a[i-1]);
    }
    cin>>m;int x;
    while(m--)
    {
        cin>>x;
        cout<<lower_bound(a.begin(),a.end(),x)-a.begin()+1<<endl;
    }
}
