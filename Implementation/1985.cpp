#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt;
    int x=0,y=0,z=0;
    for(int i=1; i<=n; i++)
    {
        cin >> cnt;
        x+=cnt;
        cin >> cnt;
        y+=cnt;
        cin >> cnt;
        z+=cnt;
    }
    if(x==0 && y==0 && z==0)
    {
        cout << "YES\n";
    }
    else
    {
        cout <<  "NO\n";
    }

}
