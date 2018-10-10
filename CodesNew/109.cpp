#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n,l,x,c=0,i,k,m;vector<int> v;
    cin>> n >> l;
    while(n--)
    {
        cin >> x; v.push_back(x);
    }
    sort(v.begin(),v.end());
        for(i=0;i<v.size()-1;i++)
        {
            if(v[i+1]-v[i]>c) c=v[i+1]-v[i];
        }
        c=c/2;
        if(v[0]-0>c) c=v[0]-0;
        if(l-v[v.size()-1]>c) c=l-v[v.size()-1];
   cout <<fixed<<setprecision(7)<<c;

return 0;
}
