#include <bits/stdc++.h>
using namespace std;
int main()
{
    //INPUT
    int n,t;
    cin >> n >> t;
    int x[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin >> x[i];
    }
    //SOLVE
    int y=0,z=0;
    while(y<t-1)
    {
        y+=x[z];
        z=y;
    }
    //OUTPUT
    if(y==t-1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
