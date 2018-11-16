#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,r=0,i=0,y,x,a,b=1;cin >> n >> a;
    for(i=1;i<=n-1;i++)
    {
        cin >> x;
        if(i!=b) continue;
        b=x+i;if(b==a) {printf("YES");return 0;}



    }
    cout << "NO";
return 0;
}
