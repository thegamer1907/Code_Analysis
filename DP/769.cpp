#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+5],s = 0,c=0,m = -1;
    for(int i = 0 ; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 1)
        {
            s--;
            c++;
        }
        if(a[i] == 0)
            s++;
         m = max(s,m);
        if(s < 0)
            s = 0;
    }
    cout << m+c << endl;
}