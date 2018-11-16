#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n; int a;
    cin >> n;
    vector<int> s;
    for(int i=0;i<n;i++)
    {
        cin >> a;
        s.push_back(a);
    }
    int one=count(s.begin(),s.end(),1);
    int zero=count(s.begin(),s.end(),0);
    int diff=one-zero,d,ans=one;
    if(ans == n)
        cout << n-1;
    else
    {
    for(int i=0;i<n;i++)
    {
            for(int j=n-1;j>=i;j--)
            {
                        vector<int> r=s;
                    for(int k=i;k<=j;k++)
                    {
                        r[k]=1-r[k];
                    }
                    d=count(r.begin(),r.end(),1)-count(r.begin(),r.end(),0);
                    if(d>diff)
                    {
                        diff=d;
                        ans=count(r.begin(),r.end(),1);
                    }
                }
            }
            if(n>1)
                cout << ans;
           else if(n==1 && s[0]==0)
    cout << "1";
    else
        cout << "0";


}}
