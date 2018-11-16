#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,t;
    cin >> n >> t;
    int a[n];
    int i,x=1;
    for(i=1;i<n;i++)
        cin >> a[i];
    while(x<n)
    {
       int c=a[x];
       x+=c;
       if(x==t)
       {
           cout << "YES";
           return 0;
       }
    }
    cout << "NO";

}